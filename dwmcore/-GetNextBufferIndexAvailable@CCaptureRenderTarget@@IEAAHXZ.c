__int64 __fastcall CCaptureRenderTarget::GetNextBufferIndexAvailable(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rax
  DWORD v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 255);
  v2 = -1;
  v4 = (__int64)(*((_QWORD *)this + 256) - (_QWORD)v1) >> 3;
  if ( v4 )
  {
    v5 = WaitForMultipleObjects(v4, v1, 0, 0);
    if ( v5 == 258 )
    {
      ScheduleCompositionPass(0, 0x2000u);
    }
    else
    {
      if ( v5 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 250) - *((_QWORD *)this + 249)) >> 3) )
        ModuleFailFastForHRESULT(2147500037LL, retaddr);
      return v5;
    }
  }
  return v2;
}
