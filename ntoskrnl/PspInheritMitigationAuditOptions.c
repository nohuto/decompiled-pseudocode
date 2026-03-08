/*
 * XREFs of PspInheritMitigationAuditOptions @ 0x14070A570
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PspInheritMitigationAuditOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // xmm1_8
  int v5; // edi
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  bool v8; // r8
  char v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // dl
  __int64 v12; // r10
  __int64 result; // rax
  __int64 v14; // xmm1_8
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
    v8 = 1;
    v9 = (4 * v5) & 0x3F;
    v10 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v11 = (*((_QWORD *)&v15 + v10) >> v9) & 3;
    v12 = (*((_QWORD *)&v17 + v10) >> v9) & 3LL;
    if ( ((*((_QWORD *)&v17 + v10) >> v9) & 3) == 0 )
    {
LABEL_3:
      v8 = ((v11 - 1) & 0xFD) != 0;
      goto LABEL_4;
    }
    switch ( (_DWORD)v12 )
    {
      case 1:
        goto LABEL_11;
      case 2:
        goto LABEL_3;
      case 3:
LABEL_11:
        v8 = v11 != 2;
        break;
    }
LABEL_4:
    if ( !v8 )
      LODWORD(v12) = v11;
    ++v5;
    result = *((_QWORD *)&v19 + v10) & ~(15LL << v9);
    *((_QWORD *)&v19 + v10) = result | ((unsigned __int64)(unsigned int)v12 << v9);
  }
  while ( v5 < 40 );
  v14 = v20;
  *(_OWORD *)a3 = v19;
  *(_QWORD *)(a3 + 16) = v14;
  return result;
}
