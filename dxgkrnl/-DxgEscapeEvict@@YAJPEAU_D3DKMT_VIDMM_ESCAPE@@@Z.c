int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  HANDLE hProcess; // rax
  int v3; // eax
  int v4; // edi
  struct DXGPROCESS *Process; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-58h]
  int v11; // [rsp+38h] [rbp-50h]
  __int16 v12; // [rsp+3Ch] [rbp-4Ch]
  char v13; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( DxgkpIsDrtEnabled((__int64)a1) )
    {
      hProcess = a1->Evict.hProcess;
      v10 = 0LL;
      v12 = 0;
      v9 = hProcess;
      v11 = 2048;
      v13 = 0;
      v3 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v8, 1);
      v4 = v3;
      if ( v3 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v8);
        v4 = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        WdLogSingleEntry2(3LL, a1->GetVads.GetVad.VadAddress, v3);
      }
      if ( (_BYTE)v12 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v8);
      return v4;
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741823LL);
      return -1073741823;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
