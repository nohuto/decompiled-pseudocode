/*
 * XREFs of SshpAlpcOpenTraceSessionUnsafe @ 0x140849E40
 * Callers:
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     SshpAlpcSendMessage @ 0x14084A2B0 (SshpAlpcSendMessage.c)
 */

__int64 __fastcall SshpAlpcOpenTraceSessionUnsafe(__int64 a1, unsigned int a2, int *a3, _DWORD *a4)
{
  int *v5; // rdi
  int v6; // eax
  int **v7; // rcx
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( a2 > 1 || a3 && !*((_QWORD *)a3 + 2) )
    return 3221225485LL;
  v5 = &dword_140C38158[48 * a2];
  LOBYTE(a1) = *((_BYTE *)v5 + 4);
  if ( !(_BYTE)a1 && !a3 )
    return 3221227264LL;
  if ( *v5 == -1 )
    return 3221225621LL;
  v6 = *v5 + 1;
  *v5 = v6;
  if ( v6 == 1 )
  {
    if ( (_BYTE)a1 )
    {
      KeCancelTimer2((__int64)(v5 + 2), 0LL, (__int64)a3, a4);
    }
    else
    {
      SshpAlpcSendMessage(a1, 1LL, 4LL, &v9, 0);
      v7 = (int **)*((_QWORD *)v5 + 23);
      if ( *v7 != v5 + 44 )
        __fastfail(3u);
      *(_QWORD *)a3 = v5 + 44;
      *((_QWORD *)a3 + 1) = v7;
      *v7 = a3;
      *((_QWORD *)v5 + 23) = a3;
    }
  }
  return *((_BYTE *)v5 + 4) == 0 ? 0x103 : 0;
}
