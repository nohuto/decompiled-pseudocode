__int64 __fastcall DripsBlockerTrackingHelper::RemoveProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  DripsBlockerTrackingHelper *v9; // rcx
  const char *v10; // r10
  struct _EPROCESS *v11; // r11
  unsigned int v12; // r14d
  unsigned int v13; // esi
  _BYTE *v14; // r8
  int v15; // eax
  int v16; // eax
  size_t v17; // [rsp+20h] [rbp-60h]
  unsigned int v18; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  char v21[16]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]
  char v23; // [rsp+70h] [rbp-10h]

  v5 = 0;
  if ( !*((_BYTE *)a1 + 302080) )
    return 0LL;
  if ( !(unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(a1, a5, a3, a4) )
  {
    v20 = 0LL;
    v23 = 0;
    LODWORD(v17) = 33;
    *(_OWORD *)v21 = 0LL;
    v22 = 0LL;
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v9, v10, v11, v21, v17, &v20);
    v19 = 0;
    v18 = 0;
    if ( DripsBlockerTrackingHelper::GetProcessEntry((__int64)a1, a2, v21, v20, a5, &v19, &v18)
      && (v12 = v19, v13 = v18, v14 = (char *)a1 + 4720 * v19, (v15 = *(_DWORD *)&v14[72 * v18 + 144]) != 0) )
    {
      v16 = v15 - 1;
      *(_DWORD *)&v14[72 * v18 + 144] = v16;
      if ( !v16 )
      {
        DripsBlockerTrackingHelper::EnableEntryAccounting(a1, v12, v13, 0);
        DripsBlockerTrackingHelper::UpdateLastActiveEntry(a1, v12, v13);
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return v5;
}
