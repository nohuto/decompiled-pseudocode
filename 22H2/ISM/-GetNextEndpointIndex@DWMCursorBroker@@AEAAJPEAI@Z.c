/*
 * XREFs of ?GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z @ 0x18019BF24
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x18019BA10 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetNextEndpointIndex(DWMCursorBroker *this, unsigned int *a2)
{
  _QWORD *v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_QWORD *)((char *)this + 216);
  v5 = -2147467259;
  v6 = 0;
  while ( *v3 )
  {
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 22) + 128LL))(
           *((_QWORD *)this + 22),
           *v3,
           v9) >= 0 )
    {
      v7 = *v3;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 160LL))(*((_QWORD *)this + 22), *v3);
      *v3 = 0LL;
      v7 = 0LL;
    }
    if ( !v7 )
      break;
    ++v6;
    v3 += 3;
    if ( v6 >= 0xA )
      return v5;
  }
  *a2 = v6;
  return 0;
}
