void HalpRestoreLegacyDmaControllerState()
{
  unsigned __int8 v0; // di
  unsigned __int8 *v1; // rbx
  __int64 v2; // rcx
  unsigned __int8 v3; // al
  unsigned __int16 v4; // dx

  __outbyte(0xFu, 0xFu);
  __outbyte(0xDEu, 0xEu);
  HalpIoDelay();
  __outbyte(8u, 0);
  __outbyte(0xD0u, 0);
  HalpIoDelay();
  v0 = 0;
  v1 = (unsigned __int8 *)&unk_140D18001;
  do
  {
    if ( v1[3] )
    {
      v2 = *(_QWORD *)(v1 - 17);
      v3 = *v1;
      if ( v0 >= 4u )
      {
        __outbyte(v2 + 22, v3);
        v4 = *(_QWORD *)(v1 - 17) + 20;
      }
      else
      {
        __outbyte(v2 + 11, v3);
        v4 = *(_QWORD *)(v1 - 17) + 10;
      }
      __outbyte(v4, v1[2]);
      HalpIoDelay();
    }
    ++v0;
    v1 += 24;
  }
  while ( v0 < 8u );
}
