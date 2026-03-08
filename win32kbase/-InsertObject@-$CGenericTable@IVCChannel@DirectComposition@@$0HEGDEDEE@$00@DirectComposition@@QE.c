/*
 * XREFs of ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C005CA7C
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00CA030 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
        struct _RTL_GENERIC_TABLE *a1,
        int a2,
        __int64 a3)
{
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  Buffer[0] = a2;
  v5 = a3;
  Buffer[1] = 0;
  return RtlInsertElementGenericTable(a1, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000017 : 0;
}
