/*
 * XREFs of sub_1800C37C0 @ 0x1800C37C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BF1AC @ 0x1800BF1AC (sub_1800BF1AC.c)
 *     sub_1800C2540 @ 0x1800C2540 (sub_1800C2540.c)
 *     sub_1800C31A0 @ 0x1800C31A0 (sub_1800C31A0.c)
 *     sub_1800C3344 @ 0x1800C3344 (sub_1800C3344.c)
 *     sub_1800C40C0 @ 0x1800C40C0 (sub_1800C40C0.c)
 */

__int64 __fastcall sub_1800C37C0(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  char *v10; // rdi
  unsigned int v11; // esi
  char *v12; // rax
  char *v13; // rbx
  int v14; // edx
  int v15; // r9d
  __int128 *v16; // rax
  int v17; // eax
  float *v18; // r14
  int v19; // edx
  _UNKNOWN **v20; // rcx
  _OWORD *v21; // r12
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-38h] BYREF
  char *v23; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  char *Src; // [rsp+70h] [rbp+18h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x10u, (__int64)&unk_18016DE00, a1 - 8);
  }
  if ( !a3 )
    goto LABEL_9;
  result = *(_QWORD *)a3 - 0x40E06547A10FE088LL;
  if ( *(_QWORD *)a3 == 0x40E06547A10FE088LL )
    result = *((_QWORD *)a3 + 1) - 0x5936EC8617E85EAALL;
  if ( result )
  {
LABEL_9:
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 224) + 2 * v6) );
    v7 = 2 * v6 + 2;
    v8 = 4 * *(_DWORD *)(*(_QWORD *)(a1 + 240) + 124LL);
    v9 = v7 + v8 + 56;
    v10 = (char *)sub_18006A1B0(v8 + 28);
    if ( !v10 )
    {
      v11 = -2147024882;
      sub_18004BD84((int)retaddr, 494, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", -2147024882);
      return v11;
    }
    v12 = (char *)sub_18006A1B0(v9);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v9);
      *(_DWORD *)v13 = v9;
      v16 = &xmmword_18015B730;
      *((_DWORD *)v13 + 1) = 128;
      if ( a3 )
        v16 = a3;
      *(_OWORD *)(v13 + 24) = *v16;
      *((_DWORD *)v13 + 13) = v7;
      v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 248) + 72LL))(
              *(_QWORD *)(a1 + 248),
              v13 + 40);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v18 = (float *)(v13 + 44);
        v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 240) + 112LL))(
                *(_QWORD *)(a1 + 240),
                v13 + 44);
        v11 = v17;
        if ( v17 >= 0 )
        {
          v19 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 124LL);
          *((_DWORD *)v13 + 12) = v19;
          Src = &v13[v7 + 56];
          sub_1800BF1AC(*(_QWORD *)(a1 + 240), v19, (__int64)Src);
          v17 = sub_180061BA0((_WORD *)v13 + 28, v7, *(_QWORD *)(a1 + 224));
          v11 = v17;
          if ( v17 >= 0 )
          {
            v20 = (_UNKNOWN **)off_18019C348;
            if ( off_18019C348 == (_UNKNOWN *)&off_18019C348 )
              goto LABEL_43;
            if ( (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
            {
              sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x11u, (__int64)&unk_18016DE00, a1 - 8);
              v20 = (_UNKNOWN **)off_18019C348;
            }
            if ( v20 == &off_18019C348 )
            {
LABEL_43:
              v21 = v13 + 24;
            }
            else
            {
              v21 = v13 + 24;
              if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
              {
                sub_1800C40C0(v20[2], 18LL, &unk_18016DE00, v13 + 24);
                v20 = (_UNKNOWN **)off_18019C348;
              }
              if ( v20 != &off_18019C348 )
              {
                if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                {
                  sub_1800BB524((__int64)v20[2], 0x13u, (__int64)&unk_18016DE00, (const wchar_t *)v13 + 28);
                  v20 = (_UNKNOWN **)off_18019C348;
                }
                if ( v20 != &off_18019C348 )
                {
                  if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                  {
                    sub_1800BB4E0((__int64)v20[2], 0x14u, (__int64)&unk_18016DE00, *((_DWORD *)v13 + 10));
                    v20 = (_UNKNOWN **)off_18019C348;
                  }
                  if ( v20 != &off_18019C348 && (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                    sub_1800C2540((__int64)v20[2], 0x15u, (__int64)&unk_18016DE00, *v18);
                }
              }
            }
            v23 = v13;
            v22 = off_180154DC8;
            v17 = sub_1800C3344((LPCRITICAL_SECTION)(a1 + 16), (void (__fastcall ***)(_QWORD, _QWORD))&v22);
            v11 = v17;
            if ( v17 >= 0 )
            {
              *(_OWORD *)v10 = *v21;
              *((_DWORD *)v10 + 6) = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 124LL);
              *((_DWORD *)v10 + 4) = *((_DWORD *)v13 + 10);
              *((float *)v10 + 5) = *v18;
              memcpy(v10 + 28, Src, v8);
              v23 = v10;
              v22 = off_180154DC0;
              v17 = sub_1800C31A0((LPCRITICAL_SECTION)(a1 + 120), (void (__fastcall ***)(_QWORD, __int64 *))&v22);
              v11 = v17;
              if ( v17 >= 0 )
              {
                v11 = 0;
                goto LABEL_51;
              }
              v14 = 528;
            }
            else
            {
              v14 = 520;
            }
          }
          else
          {
            v14 = 513;
          }
        }
        else
        {
          v14 = 507;
        }
      }
      else
      {
        v14 = 506;
      }
      v15 = v17;
    }
    else
    {
      v11 = -2147024882;
      v14 = 497;
      v15 = -2147024882;
    }
    sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", v15);
LABEL_51:
    if ( v13 )
      sub_18006A148(v13);
    sub_18006A148(v10);
    return v11;
  }
  return result;
}
