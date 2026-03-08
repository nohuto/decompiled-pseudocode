/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C021A810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(const struct _GUID *a1, int a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a2 == 1 )
  {
    if ( (unsigned int)++dword_1C013BA5C <= 4 )
    {
LABEL_3:
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))AdapterTelemetryEnabledCallback,
        0LL,
        0);
      return;
    }
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1C013BA60) > 0xC92A69C000LL )
    {
      qword_1C013BA60 = MEMORY[0xFFFFF78000000014];
      goto LABEL_3;
    }
  }
}
