/*
 * XREFs of sub_180104F08 @ 0x180104F08
 * Callers:
 *     sub_1800B8B00 @ 0x1800B8B00 (sub_1800B8B00.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180104D68 @ 0x180104D68 (sub_180104D68.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180104F08(unsigned __int16 *a1)
{
  __int64 v2; // r10
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  _QWORD *v5; // rdi
  __int64 *v6; // rax
  unsigned __int16 *v7; // rax
  int v8; // r9d
  int v9; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  lpCriticalSection = &stru_18019F8B0;
  v11 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v2 = qword_18019F748;
  v3 = (__int64 *)qword_18019F748;
  if ( qword_18019F748 )
  {
    do
    {
      v4 = v3;
      v5 = 0LL;
      v6 = v3;
      if ( v3 )
      {
        v3 = (__int64 *)*v3;
        v5 = (_QWORD *)v6[2];
      }
      v7 = a1;
      do
      {
        v8 = *(unsigned __int16 *)((char *)v7 + v5[2] - (_QWORD)a1);
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
      {
        if ( v4 == (__int64 *)v2 )
          qword_18019F748 = *v4;
        else
          *(_QWORD *)v4[1] = *v4;
        if ( v4 == (__int64 *)qword_18019F750 )
          qword_18019F750 = v4[1];
        else
          *(_QWORD *)(*v4 + 8) = v4[1];
        --dword_18019F758;
        *v4 = 0LL;
        v4[1] = 0LL;
        sub_180033A70(v4);
        sub_180104D68((__int64)v5);
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v2 = qword_18019F748;
      }
    }
    while ( v3 );
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
