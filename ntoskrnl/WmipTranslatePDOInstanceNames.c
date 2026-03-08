/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x14086C758
 * Callers:
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 * Callees:
 *     IoGetDeviceInstanceName @ 0x1402020C0 (IoGetDeviceInstanceName.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v5; // r12d
  unsigned int v6; // r10d
  int v7; // r14d
  unsigned int v8; // r14d
  void *v9; // r13
  void *v10; // rbp
  _WORD *v11; // rdi
  unsigned int *v12; // rsi
  unsigned int v13; // r9d
  unsigned int v14; // r15d
  void *v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r13
  _DWORD *v23; // r15
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  wchar_t *v26; // rdx
  char *v27; // rbx
  wchar_t *v28; // rdx
  __int64 result; // rax
  unsigned int *v30; // rcx
  unsigned int Length; // ecx
  unsigned int v32; // r15d
  wchar_t *Buffer; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  char v36; // [rsp+20h] [rbp-78h]
  char v37; // [rsp+21h] [rbp-77h]
  unsigned int v38; // [rsp+24h] [rbp-74h]
  int v39; // [rsp+28h] [rbp-70h]
  unsigned int v40; // [rsp+2Ch] [rbp-6Ch]
  unsigned int *v41; // [rsp+30h] [rbp-68h]
  void *v42; // [rsp+38h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 56) + 1;
  v36 = 0;
  v41 = v4;
  UnicodeString = 0LL;
  v39 = 0;
  v8 = v7 & 0xFFFFFFFE;
  v37 = 1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v4;
  v13 = 0;
  v38 = 0;
  do
  {
    v14 = 0;
    v40 = 0;
    if ( v12[4] )
    {
      v15 = 0LL;
      v42 = 0LL;
      while ( 1 )
      {
        v16 = 8LL * v14;
        v17 = *(_QWORD *)&v12[v16 + 6] - WmipDataProviderPnpidGuid;
        if ( !v17 )
          v17 = *(_QWORD *)&v12[v16 + 8] - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
        if ( !v17 )
          goto LABEL_43;
        v18 = *(_QWORD *)&v12[v16 + 6] - WmipDataProviderPnPIdInstanceNamesGuid;
        if ( !v18 )
          v18 = *(_QWORD *)&v12[v16 + 8] - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
        if ( !v18 )
        {
LABEL_43:
          v37 = 0;
          if ( v10 )
          {
            ObfDereferenceObject(v10);
            v4 = v41;
            v10 = 0LL;
            v13 = v38;
            v6 = v39;
            v15 = v42;
          }
        }
        v19 = v12[v16 + 10];
        if ( (v19 & 0x20) == 0 )
          goto LABEL_18;
        if ( !v11 )
        {
          v30 = v4;
          if ( v4[1] )
          {
            v35 = v4[1];
            do
            {
              v30 = (unsigned int *)((char *)v30 + v35);
              v35 = v30[1];
            }
            while ( (_DWORD)v35 );
          }
          v11 = (_WORD *)((char *)v30 + ((*v30 + 1) & 0xFFFFFFFE));
          v5 = a3 + (_DWORD)v4 - (_DWORD)v11;
        }
        v20 = v12[v16 + 11];
        v9 = *(void **)&v12[v16 + 12];
        if ( v13 >= v20 )
          v20 = v13;
        v38 = v20;
        v13 = v20;
        if ( v9 == v15 )
        {
          v12[v16 + 12] = v6;
          v12[v16 + 10] = v19 | 8;
          goto LABEL_16;
        }
        if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, &UnicodeString) >= 0 )
          break;
LABEL_42:
        v13 = v38;
LABEL_16:
        if ( a2 == 11 )
        {
          ObfDereferenceObject(v9);
          v13 = v38;
        }
LABEL_18:
        v4 = v41;
        ++v14;
        v6 = v39;
        v15 = v42;
        v40 = v14;
        if ( v14 >= v12[4] )
          goto LABEL_19;
      }
      if ( v37 )
      {
        if ( !v10 )
        {
          v10 = v9;
          ObfReferenceObject(v9);
          goto LABEL_38;
        }
        if ( v10 == v9 )
        {
LABEL_38:
          Length = UnicodeString.Length;
          v32 = UnicodeString.Length + 4;
          v8 += v32;
          if ( v36 || v32 > v5 )
          {
            v36 = 1;
          }
          else
          {
            v12[v16 + 10] |= 8u;
            Buffer = UnicodeString.Buffer;
            v12[v16 + 12] = (_DWORD)v11 - (_DWORD)v12;
            v39 = (_DWORD)v11 - (_DWORD)v12;
            v34 = Length;
            v42 = v9;
            *v11 = Length + 2;
            memmove(v11 + 1, Buffer, Length);
            *(_WORD *)((char *)v11 + v34 + 2) = 95;
            v11 = (_WORD *)((char *)v11 + v34 + 4);
            v5 -= v32;
          }
          RtlFreeUnicodeString(&UnicodeString);
          v14 = v40;
          goto LABEL_42;
        }
      }
      v37 = 0;
      if ( v10 )
      {
        ObfDereferenceObject(v10);
        v10 = 0LL;
      }
      goto LABEL_38;
    }
LABEL_19:
    v21 = v12[1];
    v12 = (unsigned int *)((char *)v12 + v21);
  }
  while ( (_DWORD)v21 );
  if ( v37 && v10 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, &UnicodeString) >= 0 )
    {
      v22 = UnicodeString.Length;
      v23 = (_DWORD *)(((unsigned __int64)v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v24 = (((_DWORD)v11 + 7) & 0xFFFFFFF8) - (_DWORD)v11;
      v25 = 2 * UnicodeString.Length + 96;
      v8 += v24 + v25;
      if ( v36 || v25 > v5 - v24 )
      {
        v36 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        ObfReferenceObject(v10);
        *(_QWORD *)(a4 + 24) = v10;
        *(_DWORD *)(a4 + 52) = v38;
        v12[1] = (_DWORD)v23 - (_DWORD)v12;
        memset(v23, 0, 0x58uLL);
        v26 = UnicodeString.Buffer;
        v23[4] = 2;
        *v23 = v25;
        v23[10] = 40;
        v27 = (char *)v23 + 90;
        v23[11] = v38;
        v23[12] = 88;
        *(_OWORD *)(v23 + 6) = WmipDataProviderPnpidGuid;
        *((_WORD *)v23 + 44) = v22 + 2;
        memmove((char *)v23 + 90, v26, (unsigned int)v22);
        v28 = UnicodeString.Buffer;
        *(_WORD *)&v27[v22] = 95;
        v23[18] = 4;
        v23[19] = 1;
        v23[20] = v22 + 92;
        *(_OWORD *)(v23 + 14) = WmipDataProviderPnPIdInstanceNamesGuid;
        *(_WORD *)&v27[v22 + 2] = v22;
        memmove((char *)v23 + v22 + 94, v28, (unsigned int)v22);
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    ObfDereferenceObject(v10);
  }
  *v41 = v8;
  result = 4LL;
  if ( !v36 )
    result = v8;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
