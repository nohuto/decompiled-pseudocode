__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(DXGMONITOR *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  char v4; // cl
  char v5; // cl
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v2 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 184LL))(v2, &v7) < 0 )
    return 3221226021LL;
  v3 = v7;
  v4 = *((_BYTE *)this + 177);
  if ( (unsigned int)v7 < HIDWORD(v7) )
  {
    v5 = v4 | 1;
  }
  else
  {
    v3 = HIDWORD(v7);
    v5 = v4 & 0xFE;
  }
  *((_BYTE *)this + 177) = v5 & 0xFD | (v3 < 0x400 ? 2 : 0);
  return 0LL;
}
