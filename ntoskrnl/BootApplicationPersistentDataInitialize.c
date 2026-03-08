/*
 * XREFs of BootApplicationPersistentDataInitialize @ 0x140B4979C
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall BootApplicationPersistentDataInitialize(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *v2; // rsi
  _QWORD *v3; // rbp
  _QWORD *Pool2; // rbx
  void *v5; // rax
  _QWORD *v6; // rax

  qword_140D15DF8 = &qword_140D15DF0;
  qword_140D15DF0 = (__int64)&qword_140D15DF0;
  v1 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 232LL);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v3 + 6) )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x1CuLL, 0x64506142u);
      if ( !Pool2 )
        return;
      v5 = (void *)ExAllocatePool2(64LL, *((unsigned int *)v3 + 6), 0x64506142u);
      if ( !v5 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return;
      }
      *((_DWORD *)Pool2 + 6) = *((_DWORD *)v3 + 6);
      Pool2[2] = v5;
      memmove(v5, (const void *)v3[2], *((unsigned int *)v3 + 6));
      v6 = qword_140D15DF8;
      if ( *(__int64 **)qword_140D15DF8 != &qword_140D15DF0 )
        __fastfail(3u);
      *Pool2 = &qword_140D15DF0;
      Pool2[1] = v6;
      *v6 = Pool2;
      qword_140D15DF8 = Pool2;
    }
  }
}
