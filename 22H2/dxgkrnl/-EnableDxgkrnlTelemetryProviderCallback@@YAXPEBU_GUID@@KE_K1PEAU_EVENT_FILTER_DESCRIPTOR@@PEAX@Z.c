/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C019E930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(const struct _GUID *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( (_DWORD)a2 == 1 )
  {
    if ( (unsigned int)++dword_1C00B31C4 <= 4 )
    {
LABEL_3:
      Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))AdapterTelemetryEnabledCallback,
        0LL,
        0);
      return;
    }
    a2 = 864000000000LL;
    a1 = (const struct _GUID *)(MEMORY[0xFFFFF78000000014] - qword_1C00B31C8);
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1C00B31C8) > 0xC92A69C000LL )
    {
      qword_1C00B31C8 = MEMORY[0xFFFFF78000000014];
      goto LABEL_3;
    }
  }
}
