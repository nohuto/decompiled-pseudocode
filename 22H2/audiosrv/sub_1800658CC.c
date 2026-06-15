/*
 * XREFs of sub_1800658CC @ 0x1800658CC
 * Callers:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B4F58 @ 0x1800B4F58 (sub_1800B4F58.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 */

__int64 __fastcall sub_1800658CC(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  WCHAR *v6; // rax
  __int64 v7; // rax
  WCHAR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rax
  WCHAR v12; // r9
  WCHAR *v13; // rax
  HANDLE v14; // rax
  int v16; // eax
  int v17; // esi
  __int64 v18; // rcx
  WCHAR *v19; // rax
  __int64 v20; // rax
  WCHAR *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  char *v24; // rax
  WCHAR v25; // r8
  WCHAR *v26; // rax
  HANDLE v27; // rax
  int v28; // edi
  int v29; // eax
  void *v30; // [rsp+28h] [rbp-D8h] BYREF
  void *v31; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  v3 = 0;
  *a3 = 0LL;
  sub_180057300(Name, 260LL, a1);
  v5 = 260LL;
  v6 = Name;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( v5 )
    v7 = 260 - v5;
  else
    v7 = 0LL;
  if ( v5 )
  {
    v8 = &Name[v7];
    v9 = 260 - v7;
    if ( v7 != 260 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"_p0" - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
  }
  v14 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v31 = v14;
  if ( v14 )
  {
    v16 = sub_1800B4F58(v14);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = 260LL;
      v19 = Name;
      do
      {
        if ( !*v19 )
          break;
        ++v19;
        --v18;
      }
      while ( v18 );
      if ( v18 )
        v20 = 260 - v18;
      else
        v20 = 0LL;
      if ( v18 )
      {
        v21 = &Name[v20];
        v22 = 260 - v20;
        if ( 260 != v20 )
        {
          v23 = 2147483646LL;
          v24 = (char *)((char *)L"h" - (char *)v21);
          do
          {
            if ( !v23 )
              break;
            v25 = *(WCHAR *)((char *)v21 + (_QWORD)v24);
            if ( !v25 )
              break;
            *v21 = v25;
            --v23;
            ++v21;
            --v22;
          }
          while ( v22 );
        }
        v26 = v21 - 1;
        if ( v22 )
          v26 = v21;
        *v26 = 0;
      }
      v27 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v30 = v27;
      if ( v27 )
      {
        v29 = sub_1800B4F58(v27);
        v28 = v29;
        if ( v29 >= 0 )
        {
          sub_18005262C(&v30);
          *a3 = 0LL;
          goto LABEL_18;
        }
        sub_18004BD84((int)retaddr, 215, (int)"wil", v29);
      }
      else
      {
        v28 = sub_1800B5768(retaddr, 213LL, "wil");
      }
      sub_18005262C(&v30);
      v3 = v28;
    }
    else
    {
      sub_18004BD84((int)retaddr, 207, (int)"wil", v16);
      v3 = v17;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v3 = sub_1800B5768(retaddr, 201LL, "wil");
  }
LABEL_18:
  sub_18005262C(&v31);
  return v3;
}
