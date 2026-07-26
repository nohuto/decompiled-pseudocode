/*
 * XREFs of ndisLWMBuildConfigurationKeyPath @ 0x1C00F9008
 * Callers:
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z @ 0x1C00F91DC (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0032060 (WPP_RECORDER_SF__guid_.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0032120 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_S @ 0x1C00336F0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0062EDC (WPP_RECORDER_SF__guid_d.c)
 */

__int64 __fastcall ndisLWMBuildConfigurationKeyPath(int a1, unsigned int *a2, wchar_t *a3)
{
  unsigned int v6; // ebx
  wchar_t *v7; // r8
  struct _GUID *v9; // [rsp+20h] [rbp-68h]
  char v10[8]; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x85u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (__int64)a2);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_9;
    }
    v7 = L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\Keywords";
  }
  else
  {
    v7 = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Network\\Interfaces\\{%08x-%04x-%04x-%02x%0"
                     "2x-%02x%02x%02x%02x%02x%02x}\\Configuration";
  }
  *(_DWORD *)v10 = *((unsigned __int16 *)a2 + 3);
  LODWORD(v9) = *((unsigned __int16 *)a2 + 2);
  v6 = RtlStringCchPrintfW(
         a3,
         0x100uLL,
         v7,
         *a2,
         v9,
         *(_QWORD *)v10,
         *((unsigned __int8 *)a2 + 8),
         *((unsigned __int8 *)a2 + 9),
         *((unsigned __int8 *)a2 + 10),
         *((unsigned __int8 *)a2 + 11),
         *((unsigned __int8 *)a2 + 12),
         *((unsigned __int8 *)a2 + 13),
         *((unsigned __int8 *)a2 + 14),
         *((unsigned __int8 *)a2 + 15));
  if ( !v6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v6;
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x87u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      a3);
    goto LABEL_13;
  }
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v6;
  *(_DWORD *)v10 = v6;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    1u,
    0x86u,
    (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
    *(_QWORD *)v10);
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v6;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x88u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (__int64)a2,
      v11);
  }
  return v6;
}
