/*
 * XREFs of ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18004D0E4
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18004B8A0 (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18004B9C4 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x18004C424 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x18004C4C8 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x18004C8A4 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18004D0E4 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18004D3E8 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18004D0E4 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18004D1AC (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x18004D394 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18004D444 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // edx
  __int64 v6; // rcx

  v2 = a2;
  if ( (_DWORD)a2 != (a2 & 0x7F) )
  {
    do
    {
      Base853Encoder::AppendByte(this, v2 | 0x80);
      v2 >>= 7;
    }
    while ( v2 != (v2 & 0x7F) );
  }
  if ( !v2 && !*((_DWORD *)this + 3) )
  {
    ++*((_DWORD *)this + 4);
    return;
  }
  v4 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v6 = *(_QWORD *)this;
      LOBYTE(a2) = 45;
    }
    else
    {
      v6 = *(_QWORD *)this;
      if ( v4 != 2 )
      {
        LOBYTE(a2) = 61;
        std::string::push_back(v6, a2);
        Base853Encoder::AppendVarInt(this, v4);
        goto LABEL_7;
      }
      LOBYTE(a2) = 95;
    }
    std::string::push_back(v6, a2);
  }
LABEL_7:
  v5 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) |= (unsigned __int8)v2 << (8 * (3 - v5));
  *((_DWORD *)this + 3) = v5 + 1;
  if ( v5 == 3 )
    Base853Encoder::EncodeBlock(this);
}
