/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0267038
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0002D74 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00ED500 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00ED5A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkpIsDrtEnabled @ 0x1C0261DB8 (DxgkpIsDrtEnabled.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C02673C4 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  HANDLE hProcess; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  struct DXGPROCESS *Process; // rax
  __int64 v18; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+38h] [rbp-50h]
  __int16 v24; // [rsp+3Ch] [rbp-4Ch]
  char v25; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( DxgkpIsDrtEnabled((__int64)a1, a2, a3, a4) )
    {
      hProcess = a1->Evict.hProcess;
      v22 = 0LL;
      v24 = 0;
      v21 = hProcess;
      v23 = 2048;
      v25 = 0;
      v9 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v20, 1);
      v13 = v9;
      if ( v9 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20);
        LODWORD(v13) = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v14 + 24) = a1->Evict.hProcess;
        *(_QWORD *)(v14 + 32) = v13;
        WdLogEvent5_WdWarning(v14);
      }
      if ( (_BYTE)v24 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v20, v15);
      return (unsigned int)v13;
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v18 + 24) = -1073741823LL;
      WdLogEvent5_WdWarning(v18);
      return 3221225473LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
