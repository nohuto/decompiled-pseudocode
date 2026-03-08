/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x1403B1510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
