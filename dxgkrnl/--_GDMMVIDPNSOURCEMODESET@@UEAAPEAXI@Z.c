/*
 * XREFs of ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C00060E0
 * Callers:
 *     ??_EDMMVIDPNSOURCEMODESET@@WBI@EAAPEAXI@Z @ 0x1C0027D00 (--_EDMMVIDPNSOURCEMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WFI@EAAPEAXI@Z @ 0x1C0027D10 (--_EDMMVIDPNSOURCEMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WGI@EAAPEAXI@Z @ 0x1C0027D20 (--_EDMMVIDPNSOURCEMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WHI@EAAPEAXI@Z @ 0x1C0027D30 (--_EDMMVIDPNSOURCEMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0012888 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

int *__fastcall DMMVIDPNSOURCEMODESET::`scalar deleting destructor'(int *P, char a2)
{
  _QWORD **v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  *(_QWORD *)P = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  P[32] |= 0x6D640000u;
  *((_QWORD *)P + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)P + 14) = 0LL;
  *((_QWORD *)P + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)P + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)P + 11) = &ReferenceCounted::`vftable';
  if ( P[24] )
  {
    WdLogSingleEntry1(2LL, P[24]);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          P[24],
          v8,
          v9,
          0,
          0,
          -1,
          (__int64)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
          P[24],
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_QWORD *)P + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v4 = (_QWORD **)(P + 12);
  *((_QWORD *)P + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    --*((_QWORD *)P + 8);
    *v5 = 0LL;
    v5[1] = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(v5 + 7));
  }
  if ( *((_QWORD *)P + 8) )
  {
    WdLogSingleEntry1(1LL, 394LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0,
          2,
          -1,
          (__int64)L"this->GetNumElements() == 0",
          394LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *(_QWORD *)P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
