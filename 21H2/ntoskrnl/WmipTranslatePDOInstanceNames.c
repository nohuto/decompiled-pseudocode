/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x140769590
 * Callers:
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoGetDeviceInstanceName @ 0x1403700D0 (IoGetDeviceInstanceName.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 */

__int64 __fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v5; // r12d
  unsigned int v6; // r10d
  int v7; // r15d
  unsigned int v8; // r15d
  struct _DMA_ADAPTER *v9; // r13
  struct _DMA_ADAPTER *v10; // rbp
  _WORD *v11; // rdi
  unsigned int *v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // eax
  struct _DMA_ADAPTER *v15; // r11
  unsigned int v16; // r9d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // r13
  _DWORD *v23; // r14
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  wchar_t *v26; // rdx
  char *v27; // rbx
  wchar_t *v28; // rdx
  __int64 result; // rax
  __int64 v30; // rax
  unsigned int *v31; // rcx
  struct _DMA_ADAPTER *v32; // rax
  unsigned int Length; // ecx
  unsigned int v34; // r14d
  wchar_t *Buffer; // rdx
  __int64 v36; // rbx
  char v37; // [rsp+20h] [rbp-88h]
  char v38; // [rsp+21h] [rbp-87h]
  int v39; // [rsp+24h] [rbp-84h]
  unsigned int v40; // [rsp+28h] [rbp-80h]
  unsigned int v41; // [rsp+2Ch] [rbp-7Ch]
  unsigned int *v42; // [rsp+30h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-70h] BYREF
  struct _DMA_ADAPTER *v44; // [rsp+50h] [rbp-58h]

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 56) + 1;
  v37 = 0;
  v42 = v4;
  UnicodeString = 0LL;
  v39 = 0;
  v8 = v7 & 0xFFFFFFFE;
  v38 = 1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v4;
  v13 = 0;
  v40 = 0;
  do
  {
    v14 = 0;
    v41 = 0;
    if ( v12[4] )
    {
      v15 = 0LL;
      v44 = 0LL;
      while ( 1 )
      {
        v16 = v13;
        v17 = 8LL * v14;
        v18 = *(_QWORD *)&v12[v17 + 6] - WmipDataProviderPnpidGuid;
        if ( !v18 )
          v18 = *(_QWORD *)&v12[v17 + 8] - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
        if ( !v18 )
          goto LABEL_46;
        v19 = *(_QWORD *)&v12[v17 + 6] - WmipDataProviderPnPIdInstanceNamesGuid;
        if ( !v19 )
          v19 = *(_QWORD *)&v12[v17 + 8] - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
        if ( !v19 )
        {
LABEL_46:
          v38 = 0;
          if ( v10 )
          {
            HalPutDmaAdapter(v10);
            v4 = v42;
            v10 = 0LL;
            v6 = v39;
            v16 = v13;
            v15 = v44;
          }
        }
        v20 = v12[v17 + 10];
        if ( (v20 & 0x20) == 0 )
          goto LABEL_11;
        if ( !v11 )
        {
          v30 = v4[1];
          v31 = v4;
          while ( (_DWORD)v30 )
          {
            v31 = (unsigned int *)((char *)v31 + v30);
            v30 = v31[1];
          }
          v11 = (_WORD *)((char *)v31 + ((*v31 + 1) & 0xFFFFFFFE));
          v5 = a3 + (_DWORD)v4 - (_DWORD)v11;
        }
        v13 = v12[v17 + 11];
        v9 = *(struct _DMA_ADAPTER **)&v12[v17 + 12];
        if ( v16 >= v13 )
          v13 = v16;
        v40 = v13;
        if ( v9 == v15 )
        {
          v12[v17 + 12] = v6;
          v12[v17 + 10] = v20 | 8;
          goto LABEL_30;
        }
        if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, &UnicodeString) >= 0 )
          break;
LABEL_30:
        if ( a2 == 11 )
        {
          HalPutDmaAdapter(v9);
          v40 = v13;
        }
LABEL_11:
        v4 = v42;
        v14 = v41 + 1;
        v6 = v39;
        v15 = v44;
        v41 = v14;
        if ( v14 >= v12[4] )
          goto LABEL_12;
      }
      if ( v38 )
      {
        if ( !v10 )
        {
          ObfReferenceObject(v9);
LABEL_39:
          v32 = v9;
          if ( v10 )
            v32 = v10;
          v10 = v32;
LABEL_42:
          Length = UnicodeString.Length;
          v34 = UnicodeString.Length + 4;
          v8 += v34;
          if ( v37 || v34 > v5 )
          {
            v37 = 1;
          }
          else
          {
            v12[v17 + 10] |= 8u;
            Buffer = UnicodeString.Buffer;
            v12[v17 + 12] = (_DWORD)v11 - (_DWORD)v12;
            v39 = (_DWORD)v11 - (_DWORD)v12;
            v36 = Length;
            v44 = v9;
            *v11 = Length + 2;
            memmove(v11 + 1, Buffer, Length);
            *(_WORD *)((char *)v11 + v36 + 2) = 95;
            v11 = (_WORD *)((char *)v11 + v36 + 4);
            v5 -= v34;
          }
          RtlFreeAnsiString(&UnicodeString);
          v13 = v40;
          goto LABEL_30;
        }
        if ( v10 == v9 )
          goto LABEL_39;
      }
      v38 = 0;
      if ( v10 )
      {
        HalPutDmaAdapter(v10);
        v10 = 0LL;
      }
      goto LABEL_42;
    }
LABEL_12:
    v21 = v12[1];
    v12 = (unsigned int *)((char *)v12 + v21);
  }
  while ( (_DWORD)v21 );
  if ( v38 && v10 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, &UnicodeString) >= 0 )
    {
      v22 = UnicodeString.Length;
      v23 = (_DWORD *)(((unsigned __int64)v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v24 = (((_DWORD)v11 + 7) & 0xFFFFFFF8) - (_DWORD)v11;
      v25 = 2 * UnicodeString.Length + 96;
      v8 += v24 + v25;
      if ( v37 || v25 > v5 - v24 )
      {
        v37 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        ObfReferenceObject(v10);
        *(_QWORD *)(a4 + 24) = v10;
        *(_DWORD *)(a4 + 52) = v40;
        v12[1] = (_DWORD)v23 - (_DWORD)v12;
        memset(v23, 0, 0x58uLL);
        v26 = UnicodeString.Buffer;
        v23[4] = 2;
        *v23 = v25;
        v23[10] = 40;
        v27 = (char *)v23 + 90;
        v23[11] = v40;
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
      RtlFreeAnsiString(&UnicodeString);
    }
    HalPutDmaAdapter(v10);
  }
  *v42 = v8;
  result = 4LL;
  if ( !v37 )
    result = v8;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
