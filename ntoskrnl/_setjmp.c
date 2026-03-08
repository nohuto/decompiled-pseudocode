/*
 * XREFs of _setjmp @ 0x140422480
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 *     setjmp @ 0x140422520 (setjmp.c)
 * Callees:
 *     <none>
 */

int __cdecl setjmp(jmp_buf Buf)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  _JBTYPE v10; // xmm6
  _JBTYPE v11; // xmm7
  _JBTYPE v12; // xmm8
  _JBTYPE v13; // xmm9
  _JBTYPE v14; // xmm10
  _JBTYPE v15; // xmm11
  _JBTYPE v16; // xmm12
  _JBTYPE v17; // xmm13
  _JBTYPE v18; // xmm14
  _JBTYPE v19; // xmm15
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]
  char v22; // [rsp+8h] [rbp+8h] BYREF

  Buf->Part[0] = v1;
  Buf->Part[1] = v2;
  Buf[1].Part[1] = v3;
  Buf[2].Part[0] = v5;
  Buf[2].Part[1] = v4;
  Buf[3].Part[0] = v6;
  Buf[3].Part[1] = v7;
  Buf[4].Part[0] = v8;
  Buf[4].Part[1] = v9;
  Buf[1].Part[0] = (unsigned __int64)&v22;
  Buf[5].Part[0] = retaddr;
  LODWORD(Buf[5].Part[1]) = _mm_getcsr();
  Buf[6] = v10;
  Buf[7] = v11;
  Buf[8] = v12;
  Buf[9] = v13;
  Buf[10] = v14;
  Buf[11] = v15;
  Buf[12] = v16;
  Buf[13] = v17;
  Buf[14] = v18;
  Buf[15] = v19;
  return 0;
}
