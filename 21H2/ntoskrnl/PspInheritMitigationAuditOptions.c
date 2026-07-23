/*
 * XREFs of PspInheritMitigationAuditOptions @ 0x1406B09AC
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationAuditOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // xmm1_8
  int v5; // ebx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  char v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int8 v10; // dl
  __int64 v11; // r8
  unsigned __int64 result; // rax
  __int64 v13; // xmm1_8
  bool v14; // al
  __int128 v15; // [rsp+0h] [rbp-68h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int128 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v19 = 0LL;
  v5 = 0;
  v17 = *a1;
  v6 = *a2;
  v18 = v3;
  v7 = *((_QWORD *)a2 + 2);
  v15 = v6;
  v20 = 0LL;
  v16 = v7;
  do
  {
    v8 = (4 * v5) & 0x3F;
    v9 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v10 = (*((_QWORD *)&v15 + v9) >> v8) & 3;
    v11 = (*((_QWORD *)&v17 + v9) >> v8) & 3LL;
    if ( ((*((_QWORD *)&v17 + v9) >> v8) & 3) == 0 )
    {
LABEL_3:
      if ( ((v10 - 1) & 0xFD) != 0 )
        goto LABEL_4;
      v14 = 0;
      goto LABEL_11;
    }
    if ( (_DWORD)v11 != 1 )
    {
      if ( (_DWORD)v11 == 2 )
        goto LABEL_3;
      if ( (_DWORD)v11 != 3 )
        goto LABEL_4;
    }
    v14 = v10 != 2;
LABEL_11:
    if ( !v14 )
      LODWORD(v11) = v10;
LABEL_4:
    result = (unsigned __int64)(unsigned int)v11 << v8;
    ++v5;
    *((_QWORD *)&v19 + v9) = result | *((_QWORD *)&v19 + v9) & ~(15LL << v8);
  }
  while ( v5 < 39 );
  v13 = v20;
  *(_OWORD *)a3 = v19;
  *(_QWORD *)(a3 + 16) = v13;
  return result;
}
