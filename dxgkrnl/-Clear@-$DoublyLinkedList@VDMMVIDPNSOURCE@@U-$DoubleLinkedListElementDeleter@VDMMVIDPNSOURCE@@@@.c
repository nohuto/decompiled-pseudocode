/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C0013EB4
 * Callers:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C000557C (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@UEAAPEAXI@Z @ 0x1C006A010 (--_G-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@U.c)
 *     ?Clear@?$Set@VDMMVIDPNSOURCE@@@@UEAAXXZ @ 0x1C006A360 (-Clear@-$Set@VDMMVIDPNSOURCE@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v2 = (_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    if ( v3 != (_QWORD *)-72LL )
      (*(void (__fastcall **)(_QWORD *, __int64))v3[9])(v3 + 9, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(v3) = WdLogSingleEntry1(1LL, 394LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v3) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v3) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       v6,
                       v5,
                       v7,
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
  return (char)v3;
}
