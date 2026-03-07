__int64 __fastcall MONITOR_MGR::_SerializeMonitorPresentEvent(
        MONITOR_MGR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned __int64 v9; // rax
  _OWORD *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rcx

  v3 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v7 = *((_DWORD *)this + 44);
  v8 = 20;
  if ( v7 > 0x14 || (v8 = *((_DWORD *)this + 44), v7) )
    v9 = 24LL * (v8 - 1) + 32;
  else
    v9 = 32LL;
  if ( v9 <= *a2 && a3 )
  {
    *(_BYTE *)a3 = v8;
    if ( v8 )
    {
      v10 = (_OWORD *)((char *)a3 + 8);
      do
      {
        v11 = v3 + *((_DWORD *)this + 44) - v8;
        ++v3;
        v12 = 3LL * (v11 % 0x14);
        *v10 = *(_OWORD *)((char *)this + 8 * v12 + 184);
        v10 = (_OWORD *)((char *)v10 + 24);
        *((_QWORD *)v10 - 1) = *((_QWORD *)this + v12 + 25);
      }
      while ( v3 < v8 );
    }
    return 0LL;
  }
  else
  {
    *a2 = v9;
    return 3221225507LL;
  }
}
