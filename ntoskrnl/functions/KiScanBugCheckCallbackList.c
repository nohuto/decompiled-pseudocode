void KiScanBugCheckCallbackList()
{
  __int64 v0; // rbx
  __int64 *v1; // r15
  __int64 v2; // r14
  unsigned int i; // esi
  void (*v4)(void); // rax

  v0 = KeBugCheckCallbackListHead;
  if ( KeBugCheckCallbackListHead && qword_140C423E8 )
  {
    v1 = &KeBugCheckCallbackListHead;
    while ( (__int64 *)v0 != &KeBugCheckCallbackListHead && (v0 & 7) == 0 )
    {
      v2 = v0;
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !MmIsAddressValidEx(v2) )
          return;
        ++v2;
      }
      if ( *(__int64 **)(v0 + 8) != v1 )
        break;
      v4 = *(void (**)(void))(v0 + 16);
      if ( *(_BYTE *)(v0 + 56) == 1
        && *(void (**)(void))(v0 + 48) == (void (*)(void))((char *)v4
                                                         + *(unsigned int *)(v0 + 32)
                                                         + *(_QWORD *)(v0 + 40)
                                                         + *(_QWORD *)(v0 + 24)) )
      {
        *(_BYTE *)(v0 + 56) = 2;
        v4();
        *(_BYTE *)(v0 + 56) = 3;
      }
      v1 = (__int64 *)v0;
      v0 = *(_QWORD *)v0;
    }
  }
}
