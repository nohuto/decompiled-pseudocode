/*
 * XREFs of ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02366B4
 * Callers:
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 */

__int64 __fastcall MNDrawMenu3DHotTracking(HDC a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r12
  int v10; // ebp
  int v11; // r15d
  int v12; // edi
  int v13; // esi
  __int64 v14; // r14

  result = *(_QWORD *)a3;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 96LL) || (*(_DWORD *)(result + 4) & 0x20000000) == 0 )
  {
    result = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
    if ( (*(_DWORD *)(result + 40) & 1) == 0 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)a3 + 4LL);
      if ( (v7 & 0x80u) == 0 )
      {
        if ( (v7 & 0x100) == 0 )
        {
          if ( (v7 & 0x10000000) == 0 )
            return result;
          if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 24LL) )
            v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 24LL);
          else
            v8 = *(_QWORD *)(gpsi + 4728LL);
          v9 = v8;
          *(_DWORD *)(*(_QWORD *)a3 + 4LL) &= ~0x10000000u;
          goto LABEL_14;
        }
        v8 = *(_QWORD *)(gpsi + 4856LL);
        v9 = *(_QWORD *)(gpsi + 4824LL);
      }
      else
      {
        v8 = *(_QWORD *)(gpsi + 4824LL);
        v9 = *(_QWORD *)(gpsi + 4856LL);
      }
      *(_DWORD *)(*(_QWORD *)a3 + 4LL) = v7 | 0x10000000;
LABEL_14:
      v10 = *(_DWORD *)(*(_QWORD *)a3 + 64LL);
      v11 = *(_DWORD *)(*(_QWORD *)a3 + 68LL);
      v12 = *(_DWORD *)(*(_QWORD *)a3 + 72LL);
      v13 = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
      v14 = GreSelectBrush(a1, v8);
      NtGdiPatBlt(a1, v10, v11, v12 - 1, 1, 15728673);
      NtGdiPatBlt(a1, v10, v11, 1, v13 - 1, 15728673);
      GreSelectBrush(a1, v9);
      NtGdiPatBlt(a1, v10, v13 + v11 - 1, v12 - 1, 1, 15728673);
      NtGdiPatBlt(a1, v12 + v10 - 1, v11, 1, v13, 15728673);
      return GreSelectBrush(a1, v14);
    }
  }
  return result;
}
