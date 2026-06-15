/*
 * XREFs of sub_1800F2D78 @ 0x1800F2D78
 * Callers:
 *     sub_1800F53AC @ 0x1800F53AC (sub_1800F53AC.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800C5CB0 @ 0x1800C5CB0 (sub_1800C5CB0.c)
 *     sub_1800F479C @ 0x1800F479C (sub_1800F479C.c)
 *     sub_1800F4F90 @ 0x1800F4F90 (sub_1800F4F90.c)
 *     sub_1800F58D0 @ 0x1800F58D0 (sub_1800F58D0.c)
 *     sub_1800F593C @ 0x1800F593C (sub_1800F593C.c)
 *     sub_180139A5C @ 0x180139A5C (sub_180139A5C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F2D78(__int64 a1, unsigned int a2, LPCRITICAL_SECTION **a3)
{
  unsigned int v4; // r13d
  int v6; // r15d
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  LPCRITICAL_SECTION v10; // rax
  LPCRITICAL_SECTION *v11; // rsi
  int v12; // r13d
  __int64 *v13; // r12
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  void *v20; // rdi
  LPCRITICAL_SECTION v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  LPCRITICAL_SECTION v24; // rax
  _QWORD *v27; // [rsp+48h] [rbp-B8h] BYREF
  void *v28; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v30; // [rsp+60h] [rbp-A0h]
  LPCRITICAL_SECTION v31; // [rsp+68h] [rbp-98h] BYREF
  char v32; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION v33; // [rsp+78h] [rbp-88h] BYREF
  char v34; // [rsp+80h] [rbp-80h]
  LPCRITICAL_SECTION v35; // [rsp+88h] [rbp-78h] BYREF
  char v36; // [rsp+90h] [rbp-70h]
  LPCRITICAL_SECTION v37; // [rsp+98h] [rbp-68h] BYREF
  char v38; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v40[154]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = a2;
  v6 = 0;
  sub_180066980((__int64)&v37, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  sub_180066980((__int64)&v35, (struct _RTL_CRITICAL_SECTION *)(a1 + 64));
  v8 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v9 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v9 )
      v10 = 0LL;
    else
      v10 = **a3;
    sub_1800F58D0(*((_QWORD *)off_18019C348 + 2), v9, v7, v4, v9, v10);
    v8 = off_18019C348;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v11 = *a3;
    if ( **a3 )
    {
      memset(v40, 0, sizeof(v40));
      v12 = 0;
      v13 = 0LL;
      v31 = (LPCRITICAL_SECTION)(a1 + 120);
      sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
      v33 = (LPCRITICAL_SECTION)(a1 + 160);
      v15 = *(_QWORD **)(a1 + 160);
      v27 = v15;
      while ( v15 )
      {
        v16 = (_OWORD *)sub_1800B8CCC(v14, (__int64)v15);
        v17 = v40;
        v18 = 9LL;
        v7 = 128LL;
        do
        {
          *v17 = *v16;
          v17[1] = v16[1];
          v17[2] = v16[2];
          v17[3] = v16[3];
          v17[4] = v16[4];
          v17[5] = v16[5];
          v17[6] = v16[6];
          v17 += 8;
          *(v17 - 1) = v16[7];
          v16 += 8;
          --v18;
        }
        while ( v18 );
        *v17 = *v16;
        v17[1] = v16[1];
        v17[2] = v16[2];
        v17[3] = v16[3];
        v17[4] = v16[4];
        if ( *v11 == (LPCRITICAL_SECTION)v40[0] )
        {
          v13 = v15;
          v12 = 1;
          break;
        }
        sub_1800B91A0((__int64)v17, &v27);
        v15 = v27;
      }
      if ( v30 )
        LeaveCriticalSection(lpCriticalSection);
      if ( !v12 )
        goto LABEL_32;
      lpCriticalSection = 0LL;
      LODWORD(v27) = 0;
      v28 = 0LL;
      v39 = *(_OWORD *)((char *)&v40[33] + 4);
      v19 = sub_180139A5C(
              *(_QWORD *)(a1 + 16),
              (unsigned int)&v40[1] + 4,
              v7,
              (unsigned int)&v39,
              v40[36],
              (__int64)&v27,
              (__int64)&v28);
      v20 = v28;
      if ( v19 >= 0 && (_DWORD)v27 )
      {
        v4 = a2;
        v6 = sub_1800F479C(a1, (unsigned int)*v11, (_DWORD)v28, (_DWORD)v27, a2, (__int64)&lpCriticalSection);
        if ( v6 < 0 )
        {
          sub_180066980((__int64)&v31, v31);
          sub_1800C5CB0((__int64 *)v33, v13);
          if ( v32 )
            LeaveCriticalSection(v31);
        }
        else
        {
          v21 = lpCriticalSection;
          v40[0] = lpCriticalSection;
          LODWORD(v40[153]) = a2;
          sub_180066980((__int64)&v33, v31);
          sub_1800F4F90(v22, v13, v40);
          if ( v34 )
            LeaveCriticalSection(v33);
          *v11 = v21;
        }
      }
      else
      {
        v6 = RmReleaseResources(*v11);
        v4 = a2;
      }
      if ( v20 )
        sub_180033A70(v20);
      else
LABEL_32:
        v4 = a2;
      v8 = off_18019C348;
    }
  }
  if ( v8 != &off_18019C348 && (*((_DWORD *)v8 + 7) & 0x100) != 0 && *((_BYTE *)v8 + 25) >= 4u )
  {
    v23 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v23 )
      v24 = 0LL;
    else
      v24 = **a3;
    sub_1800F593C(v8[2], v23, v7, v4, v23, v24, v6);
  }
  if ( v36 )
    LeaveCriticalSection(v35);
  if ( v38 )
    LeaveCriticalSection(v37);
  return (unsigned int)v6;
}
