/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x1C0034298
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001E568 (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0013FD0 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x1C002DF4C (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x1C002DFF8 (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  const void ***v6; // r8
  const void **v7; // rbx
  int v8; // ecx
  NTSTATUS v9; // ebx
  __int64 v10; // rbp
  int v11; // r9d
  unsigned __int16 v12; // r8
  unsigned __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  v4 = a2;
  *(_WORD *)a2 = 0;
  v6 = (const void ***)(*a1 + 176LL);
  if ( *(_DWORD *)(*a1 + 168LL) == 3 && (v7 = *v6, a2 = *(unsigned __int16 *)*v6, (_WORD)a2) )
  {
    v8 = *(unsigned __int16 *)(v4 + 2);
    if ( (unsigned __int16)(v8 - 2) > 4u )
    {
      v10 = (unsigned __int16)(v8 - 2);
      v11 = (unsigned __int16)(v8 - 2) - 4;
      if ( (int)a2 >= v11 )
      {
        LOWORD(a2) = v8 - 6;
      }
      else
      {
        v12 = *(_WORD *)*v6;
        do
        {
          v13 = v12;
          v12 += 2;
          *(_WORD *)(*(_QWORD *)(v4 + 8) + 2 * (v13 >> 1)) = 48;
        }
        while ( v12 < v11 );
      }
      memmove(*(void **)(v4 + 8), v7[1], (unsigned __int16)a2);
      v9 = RtlStringCbPrintfW(
             (NTSTRSAFE_PWSTR)(*(_QWORD *)(v4 + 8) + 2 * ((unsigned __int64)(v10 - 4) >> 1)),
             6uLL,
             L"%02X",
             *(unsigned __int16 *)v7);
      if ( v9 >= 0 )
      {
        *(_WORD *)v4 = *(_WORD *)(v4 + 2) - 2;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0x7Du,
          (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
          v9);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432LL), a2, (unsigned int)(v8 - 2), a4, v15);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432LL), a2, (__int64)v6, a4, v15);
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v9;
}
