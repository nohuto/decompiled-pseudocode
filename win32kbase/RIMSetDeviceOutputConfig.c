void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  struct RawInputManagerObject *v10; // rcx
  _DWORD *v11; // r9
  struct INPUT_SPACE_REGION *v12[2]; // [rsp+20h] [rbp-28h] BYREF
  struct INPUT_SPACE *v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 59);
      v10 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 42);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10, v9);
      else
        RIMEndAllActiveContacts((__int64)v10);
    }
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v13);
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v12);
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)v13,
           (struct CLockedInputSpaceRegion *)v12) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)v13, (struct CLockedInputSpaceRegion *)v12);
    }
    else
    {
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v13[0], v12[0]);
    ExReleaseResourceLite(*(PERESOURCE *)v12[1]);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*(PERESOURCE *)v13[1]);
    KeLeaveCriticalRegion();
  }
  if ( *((_DWORD *)a1 + 334) && a4 && *((_DWORD *)a1 + 338) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v11 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 216LL * v4);
      if ( v11[4] == *((_DWORD *)a1 + 467) && v11[5] == *((_DWORD *)a1 + 468) && v11[7] == *((_DWORD *)a1 + 470) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
