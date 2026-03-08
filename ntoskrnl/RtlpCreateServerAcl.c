/*
 * XREFs of RtlpCreateServerAcl @ 0x1406839D0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  USHORT v7; // bx
  unsigned __int16 *v9; // rdi
  unsigned int v10; // r15d
  USHORT v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // r10
  NTSTATUS result; // eax
  USHORT v15; // cx
  USHORT v16; // dx
  __int64 v17; // r10
  __int64 v18; // r11
  ACL *Pool2; // rax
  ACL *v20; // r15
  unsigned int v21; // ebp
  unsigned int v22; // eax
  char *v23; // rbx
  unsigned __int8 *v24; // r15
  char v25; // al
  char *v26; // r12
  unsigned __int8 *v27; // r14
  char *v28; // rbx
  char *v29; // rbx
  __int64 v30; // rcx
  __int16 v31; // ax
  _BYTE *v32; // rax
  __int16 v33; // ax
  ACL *pusResult; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  LOWORD(pusResult) = 8;
  v7 = 8;
  if ( a1 )
  {
    v9 = (unsigned __int16 *)(a1 + 8);
    v10 = *(unsigned __int16 *)(a1 + 4);
    v11 = 4 * (a3[1] + 2);
    v12 = 0;
    v13 = a1 + 8;
    if ( *(_WORD *)(a1 + 4) )
    {
      while ( *(_BYTE *)v13 )
      {
        if ( a2 && *(_BYTE *)v13 == 4 )
        {
          v33 = 4 * *(unsigned __int8 *)(v13 + 13);
          if ( (unsigned __int16)(v33 + 8) <= v11 )
            v16 = v11 - v33 - 8;
          else
            v16 = v33 + 8 - v11;
          v15 = v7;
LABEL_6:
          result = RtlUShortAdd(v15, v16, (USHORT *)&pusResult);
          if ( result < 0 )
            return result;
          v7 = (unsigned __int16)pusResult;
        }
        result = RtlUShortAdd(v7, *(_WORD *)(v13 + 2), (USHORT *)&pusResult);
        if ( result < 0 )
          return result;
        v7 = (unsigned __int16)pusResult;
        ++v12;
        v13 = v18 + v17;
        if ( v12 >= v10 )
          goto LABEL_10;
      }
      result = RtlUShortAdd(v7, v11, (USHORT *)&pusResult);
      if ( result < 0 )
        return result;
      v15 = (unsigned __int16)pusResult;
      v16 = 4;
      goto LABEL_6;
    }
LABEL_10:
    Pool2 = (ACL *)ExAllocatePool2(256LL, v7, 1665230163LL);
    *a4 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *a5 = 1;
    RtlCreateAcl(Pool2, v7, 3u);
    v20 = *a4;
    v21 = 0;
    LOWORD(v22) = *(_WORD *)(a1 + 4);
    pusResult = v20;
    v23 = (char *)&v20[1];
    if ( (_WORD)v22 )
    {
      v24 = (unsigned __int8 *)Src;
      do
      {
        v25 = *(_BYTE *)v9;
        if ( !*(_BYTE *)v9 || a2 && v25 == 4 )
        {
          v26 = v23;
          if ( v25 )
            v27 = (unsigned __int8 *)v9 + RtlLengthSid(v9 + 6) + 12;
          else
            v27 = (unsigned __int8 *)(v9 + 4);
          *(_QWORD *)v23 = *(_QWORD *)v9;
          v28 = v23 + 12;
          memmove(v28, v24, 4LL * v24[1] + 8);
          v29 = &v28[(unsigned __int8)(4 * (v24[1] + 2))];
          memmove(v29, v27, 4LL * v27[1] + 8);
          v30 = v27[1];
          v31 = v24[1] + 7;
          *v26 = 4;
          v23 = &v29[4 * v30 + 8];
          *((_WORD *)v26 + 1) = 4 * (v31 + v30);
          *((_WORD *)v26 + 4) = 1;
        }
        else
        {
          memmove(v23, v9, v9[1]);
          v23 += v9[1];
        }
        ++v21;
        v9 = (unsigned __int16 *)((char *)v9 + v9[1]);
        v22 = *(unsigned __int16 *)(a1 + 4);
      }
      while ( v21 < v22 );
      v20 = pusResult;
    }
    v20->AceCount = v22;
  }
  else
  {
    v32 = a5;
    *a4 = 0LL;
    *v32 = 0;
  }
  return 0;
}
