/*
 * XREFs of ?finish@write_buffer@tson@@QEAAJXZ @ 0x1800ACE14
 * Callers:
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1800ACDD4 (-finish@output_archive@tson@@QEAAJXZ.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD214 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::write_buffer::finish(tson::write_buffer *this)
{
  unsigned __int64 v1; // r8

  if ( *((_BYTE *)this + 8) )
  {
    *((_QWORD *)this + 258) = 0LL;
    *((_QWORD *)this + 259) = 0LL;
    *((_QWORD *)this + 260) = 0LL;
    return 2147942414LL;
  }
  else
  {
    v1 = (unsigned int)(*((_DWORD *)this + 518) - *((_DWORD *)this + 516));
    if ( v1 > 0xFFFFFF )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    **((_DWORD **)this + 258) = v1 & 0x3F | (16 * v1) & 0x3F0000 | (4 * (_WORD)v1) & 0x3F00 | ((_DWORD)v1 << 6) & 0x3F000000 | 0x80408040;
    return 0LL;
  }
}
