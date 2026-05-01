/*
 * XREFs of ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x1800A0FC8
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF9C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::input_archive(
        tson::input_archive *this,
        struct tson::read_buffer *a2,
        char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = 0;
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 32) = 0;
  memset_0((char *)this + 36, 0, 0x64uLL);
  *((_QWORD *)this + 17) = 0LL;
  LOBYTE(v5) = 0x80;
  tson::input_archive::consume_expected_marker(this, v5, 2147943177LL);
  LOBYTE(v6) = a3;
  tson::input_archive::consume_expected_marker(this, v6, v7);
  v8 = *((_QWORD *)this + 17);
  if ( v8 >= 0x19 )
  {
    *((_BYTE *)this + 32) = 1;
  }
  else
  {
    *((_DWORD *)this + v8 + 9) = 0;
    ++*((_QWORD *)this + 17);
  }
  return this;
}
