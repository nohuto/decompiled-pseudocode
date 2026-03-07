__int64 __fastcall DripsBlockerTrackingHelper::DoGetProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned int v10; // ebx
  DripsBlockerTrackingHelper *v11; // rcx
  _BYTE *v12; // r9
  const char *v13; // r10
  struct _EPROCESS *v14; // r11
  unsigned __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  char v17[16]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+68h] [rbp-40h]

  v10 = 0;
  if ( (unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(a1, a5, a3, a8) )
  {
    *v12 = 1;
    return 0LL;
  }
  else
  {
    v16 = 0LL;
    v19 = 0;
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v11, v13, v14, v17, 0x21u, &v16);
    if ( !(unsigned __int8)DripsBlockerTrackingHelper::GetProcessEntry(a1, a2, v17, v16, a5, a6, a7) )
    {
      v10 = DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(a1, a2, v17, v16, a5, a6, a7);
      if ( v10 == -1073741275 )
        return (unsigned int)DripsBlockerTrackingHelper::AddNewProcessEntry(a1, a2, (__int64)v17, a5, a6, a7);
    }
    return v10;
  }
}
