char __fastcall CDrawingContext::GetMonitorTargetId(CDrawingContext *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  if ( !*((_BYTE *)this + 192) )
    return 0;
  v2 = *((_DWORD *)this + 47);
  v3 = *(_QWORD *)((char *)this + 180);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 164);
  *((_QWORD *)a2 + 2) = v3;
  *((_DWORD *)a2 + 6) = v2;
  return 1;
}
