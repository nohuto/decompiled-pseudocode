/*
 * XREFs of IsRegNameEqual @ 0x1C02A186C
 * Callers:
 *     bNotIsKeySymbolicLink @ 0x1C00B7A98 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsRegNameEqual(HANDLE KeyHandle, HANDLE a2, _DWORD *a3)
{
  int v3; // ebx
  ULONG v7; // edx
  unsigned int v8; // ecx
  char *v9; // rax
  unsigned __int16 *v10; // rsi
  char *v11; // r14
  NTSTATUS v12; // edi
  unsigned __int16 *v13; // rcx
  unsigned __int16 *v14; // rax
  signed __int64 v15; // r14
  int v16; // edx
  int v17; // ecx
  bool v18; // zf
  ULONG Length; // [rsp+70h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *a3 = 0;
  Length = 0;
  ResultLength = 0;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  ZwQueryKey(a2, KeyNameInformation, 0LL, 0, &ResultLength);
  if ( Length + 2 >= Length
    && (v7 = ResultLength + 2, ResultLength + 2 >= ResultLength)
    && (ResultLength += 2, Length + 5 >= Length + 2)
    && (v8 = (Length + 5) & 0xFFFFFFFC, Length = v8, v8 + v7 >= v8)
    && v7 + v8
    && (v9 = (char *)Win32AllocPoolZInit(v7 + v8, 1718382187LL), (v10 = (unsigned __int16 *)v9) != 0LL) )
  {
    v11 = &v9[Length];
    v12 = ZwQueryKey(KeyHandle, KeyNameInformation, v9, Length, &Length);
    v13 = v10;
    if ( v12 >= 0 )
    {
      v10[((unsigned __int64)*(unsigned int *)v10 >> 1) + 2] = 0;
      v12 = ZwQueryKey(a2, KeyNameInformation, v11, ResultLength, &ResultLength);
      v13 = v10;
      if ( v12 >= 0 )
      {
        *(_WORD *)&v11[2 * ((unsigned __int64)*(unsigned int *)v11 >> 1) + 4] = 0;
        v14 = v10 + 2;
        v15 = v11 - (char *)v10;
        do
        {
          v16 = *(unsigned __int16 *)((char *)v14 + v15);
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        v18 = v17 == 0;
        v13 = v10;
        LOBYTE(v3) = v18;
        *a3 = v3;
      }
    }
    Win32FreePool(v13);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
