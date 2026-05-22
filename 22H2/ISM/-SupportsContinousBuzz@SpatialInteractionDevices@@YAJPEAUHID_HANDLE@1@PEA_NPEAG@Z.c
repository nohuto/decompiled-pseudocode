/*
 * XREFs of ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x1800CA6C0
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BDD0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAGW4_HIDP_REPORT_TYPE@@@Z @ 0x1800C7718 (--$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800CA898 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 */

__int64 __fastcall SpatialInteractionDevices::SupportsContinousBuzz(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3,
        unsigned __int16 *a4)
{
  __int64 v6; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 result; // rax
  char *v11; // r13
  unsigned int v12; // r12d
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // ebp
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  ULONG v20; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( !this )
  {
    v8 = -2147024809;
    v9 = 883LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 884LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 885LL;
    goto LABEL_3;
  }
  *(_BYTE *)a2 = 0;
  v11 = (char *)this + 280;
  *(_WORD *)a3 = 0;
  v12 = 0;
  if ( !*((_DWORD *)this + 46) )
    return 0LL;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 22) + 72LL * v12;
    if ( *(_WORD *)(v13 + 10) == 14 && *(_WORD *)(v13 + 8) == 16 && *(_WORD *)v13 == 10 && !*(_BYTE *)(v13 + 12) )
      break;
LABEL_25:
    if ( ++v12 >= *((_DWORD *)this + 46) )
      return 0LL;
  }
  LOBYTE(v6) = *(_BYTE *)(v13 + 2);
  result = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(this, v6, a3);
  if ( (int)result < 0 )
    return result;
  v14 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>((__int64)this, (__int64)v11, v13, &v22, v20);
  v6 = 0LL;
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( (_WORD)v22 == 4100 )
    {
      v16 = 0;
      if ( *((_DWORD *)this + 46) )
      {
        while ( 1 )
        {
          v17 = *((_QWORD *)this + 22) + 72LL * v16;
          if ( *(_WORD *)(v17 + 10) == 14 && *(_WORD *)(v17 + 8) == 17 && *(_WORD *)v17 == 10 && !*(_BYTE *)(v17 + 12) )
          {
            LOBYTE(v6) = *(_BYTE *)(v17 + 2);
            result = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(this, v6, a3);
            if ( (int)result < 0 )
              return result;
            v18 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>(
                    (__int64)this,
                    (__int64)v11,
                    v17,
                    &v23,
                    v20);
            v6 = 0LL;
            v15 = v18;
            if ( v18 < 0 )
            {
              v19 = 916LL;
              goto LABEL_31;
            }
            if ( !(_WORD)v23 )
            {
              *(_BYTE *)a2 = 1;
              *(_WORD *)a3 = *(_WORD *)(v13 + 56);
              return 0LL;
            }
          }
          if ( ++v16 >= *((_DWORD *)this + 46) )
            goto LABEL_25;
        }
      }
    }
    goto LABEL_25;
  }
  v19 = 902LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)v15);
  return v15;
}
