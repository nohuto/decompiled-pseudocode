/*
 * XREFs of sub_180109634 @ 0x180109634
 * Callers:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_180001108 @ 0x180001108 (sub_180001108.c)
 *     sub_1800011E4 @ 0x1800011E4 (sub_1800011E4.c)
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_1801052C0 @ 0x1801052C0 (sub_1801052C0.c)
 *     sub_180105324 @ 0x180105324 (sub_180105324.c)
 *     sub_18010743C @ 0x18010743C (sub_18010743C.c)
 *     sub_1801096D0 @ 0x1801096D0 (sub_1801096D0.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18010983C @ 0x18010983C (sub_18010983C.c)
 *     sub_1801098D0 @ 0x1801098D0 (sub_1801098D0.c)
 *     sub_180109980 @ 0x180109980 (sub_180109980.c)
 *     sub_180109E70 @ 0x180109E70 (sub_180109E70.c)
 *     sub_180109F18 @ 0x180109F18 (sub_180109F18.c)
 *     sub_18010A200 @ 0x18010A200 (sub_18010A200.c)
 *     sub_18010A2BC @ 0x18010A2BC (sub_18010A2BC.c)
 *     sub_18010A89C @ 0x18010A89C (sub_18010A89C.c)
 *     sub_18010AA2C @ 0x18010AA2C (sub_18010AA2C.c)
 *     sub_18010AB24 @ 0x18010AB24 (sub_18010AB24.c)
 *     sub_18010ABD4 @ 0x18010ABD4 (sub_18010ABD4.c)
 *     sub_18010ACA4 @ 0x18010ACA4 (sub_18010ACA4.c)
 *     sub_18010ADAC @ 0x18010ADAC (sub_18010ADAC.c)
 *     sub_18010B0CC @ 0x18010B0CC (sub_18010B0CC.c)
 *     sub_18010BCE0 @ 0x18010BCE0 (sub_18010BCE0.c)
 *     sub_18010BD6C @ 0x18010BD6C (sub_18010BD6C.c)
 *     sub_18010CB7C @ 0x18010CB7C (sub_18010CB7C.c)
 *     sub_18010CC1C @ 0x18010CC1C (sub_18010CC1C.c)
 *     sub_18010CCB0 @ 0x18010CCB0 (sub_18010CCB0.c)
 *     sub_18010CE74 @ 0x18010CE74 (sub_18010CE74.c)
 *     sub_18010D658 @ 0x18010D658 (sub_18010D658.c)
 *     sub_180115054 @ 0x180115054 (sub_180115054.c)
 *     sub_18012C550 @ 0x18012C550 (sub_18012C550.c)
 *     sub_18012D728 @ 0x18012D728 (sub_18012D728.c)
 *     sub_18012DAC0 @ 0x18012DAC0 (sub_18012DAC0.c)
 *     sub_18012DE50 @ 0x18012DE50 (sub_18012DE50.c)
 *     sub_18012F274 @ 0x18012F274 (sub_18012F274.c)
 *     sub_18012F39C @ 0x18012F39C (sub_18012F39C.c)
 *     sub_180133808 @ 0x180133808 (sub_180133808.c)
 *     sub_180133858 @ 0x180133858 (sub_180133858.c)
 *     sub_1801338F0 @ 0x1801338F0 (sub_1801338F0.c)
 *     sub_1801339A4 @ 0x1801339A4 (sub_1801339A4.c)
 *     sub_180133A58 @ 0x180133A58 (sub_180133A58.c)
 *     sub_180133AE0 @ 0x180133AE0 (sub_180133AE0.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_1801367E0 @ 0x1801367E0 (sub_1801367E0.c)
 *     sub_180136FC0 @ 0x180136FC0 (sub_180136FC0.c)
 *     sub_18013C814 @ 0x18013C814 (sub_18013C814.c)
 *     sub_18013C928 @ 0x18013C928 (sub_18013C928.c)
 *     sub_180142CE0 @ 0x180142CE0 (sub_180142CE0.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180109634(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)(a2 + 11);
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
