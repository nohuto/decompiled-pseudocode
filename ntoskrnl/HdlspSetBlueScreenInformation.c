/*
 * XREFs of HdlspSetBlueScreenInformation @ 0x140AE84A8
 * Callers:
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 * Callees:
 *     strcpy_s @ 0x1403D9D10 (strcpy_s.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HdlspSetBlueScreenInformation(unsigned int *a1, __int64 a2)
{
  PKSPIN_LOCK v2; // r8
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // r11
  KSPIN_LOCK v8; // rcx
  __int64 v9; // rdi
  unsigned __int8 *v10; // rax
  int v11; // r9d
  int v12; // edx
  __int64 v13; // r14
  char *v14; // r13
  __int64 v15; // rbp
  char *Pool2; // rax
  char *v17; // rsi
  PKSPIN_LOCK v18; // rax
  void *v19; // rcx
  KSPIN_LOCK v20; // rax
  unsigned __int8 *v21; // rcx
  char *v22; // rax
  char *v23; // rax
  PKSPIN_LOCK v24; // rcx

  v2 = HeadlessGlobals;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    return 3221225473LL;
  v5 = 0;
  if ( a1 )
  {
    v6 = *a1;
    if ( (unsigned int)v6 >= 2 )
    {
      v7 = (unsigned int)v6;
      if ( v6 < a2 - 8 && !*((_BYTE *)a1 + (unsigned int)(v6 - 1) + 4) && !*((_BYTE *)a1 + a2 - 4) )
      {
        v8 = HeadlessGlobals[5];
        v9 = v8;
        if ( v8 )
        {
          do
          {
            v10 = *(unsigned __int8 **)v9;
            do
            {
              v11 = *((unsigned __int8 *)a1 + (_QWORD)v10 - *(_QWORD *)v9 + 4);
              v12 = *v10 - v11;
              if ( v12 )
                break;
              ++v10;
            }
            while ( v11 );
            if ( !v12 )
              break;
            v8 = v9;
            v9 = *(_QWORD *)(v9 + 16);
          }
          while ( v9 );
        }
        v13 = -1LL;
        v14 = (char *)a1 + v7;
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15 + 4] );
        if ( v9 )
        {
          if ( v15 )
          {
            Pool2 = (char *)ExAllocatePool2(64LL, v15 + 1, 0x736C6448u);
            v17 = Pool2;
            if ( Pool2 )
            {
              strcpy_s(Pool2, v15 + 1, v14 + 4);
              v18 = HeadlessGlobals;
              v19 = *(void **)(v9 + 8);
              *(_QWORD *)(v9 + 8) = v17;
              if ( (v18[6] & 2) == 0 )
                goto LABEL_40;
            }
            else
            {
              return (unsigned int)-1073741801;
            }
            return v5;
          }
          v20 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v8 + 16) = v20;
          if ( v2[5] == v9 )
            v2[5] = v20;
          if ( (v2[6] & 2) != 0 )
            return v5;
          ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
          v21 = *(unsigned __int8 **)v9;
        }
        else
        {
          if ( !v15 )
            return (unsigned int)-1073741811;
          v9 = ExAllocatePool2(64LL, 0x18uLL, 0x736C6448u);
          if ( !v9 )
            return v5;
          v22 = (char *)ExAllocatePool2(64LL, v15 + 1, 0x736C6448u);
          *(_QWORD *)(v9 + 8) = v22;
          if ( !v22 )
          {
            v5 = -1073741801;
            goto LABEL_39;
          }
          strcpy_s(v22, v15 + 1, v14 + 4);
          do
            ++v13;
          while ( *((_BYTE *)a1 + v13 + 4) );
          if ( v13 )
          {
            v23 = (char *)ExAllocatePool2(64LL, v13 + 1, 0x736C6448u);
            *(_QWORD *)v9 = v23;
            if ( v23 )
            {
              strcpy_s(v23, v13 + 1, (const char *)a1 + 4);
              v24 = HeadlessGlobals;
              *(_QWORD *)(v9 + 16) = HeadlessGlobals[5];
              v24[5] = v9;
              return v5;
            }
            v5 = -1073741801;
          }
          else
          {
            v5 = -1073741811;
          }
          v21 = *(unsigned __int8 **)(v9 + 8);
        }
        ExFreePoolWithTag(v21, 0);
LABEL_39:
        v19 = (void *)v9;
LABEL_40:
        ExFreePoolWithTag(v19, 0);
        return v5;
      }
    }
  }
  return 3221225485LL;
}
