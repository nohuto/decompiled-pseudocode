/*
 * XREFs of ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180035F88
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035AAC (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x180147644 (--1InputConfigContextProvider@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall InputConfigContextProvider::ClearConfigs(__int64 a1, const struct std::nothrow_t *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v5; // rcx

  v2 = *(_QWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  if ( *(_QWORD *)a2 != v4 )
  {
    do
    {
      v5 = *(void **)(v2 + 16);
      if ( v5 )
        operator delete(v5, a2);
      v2 += 24LL;
    }
    while ( v2 != v4 );
    v2 = *(_QWORD *)a2;
  }
  *((_QWORD *)a2 + 1) = v2;
}
