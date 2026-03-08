/*
 * XREFs of BiBuildIdentifierList @ 0x14082DD44
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14082BF38 (BiBindEfiNamespaceObjects.c)
 *     BiExportStoreAlterationsToEfi @ 0x140A5BC98 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     BiFreeIdentifierList @ 0x14082B53C (BiFreeIdentifierList.c)
 *     BiEnumerateSubKeys @ 0x14082D288 (BiEnumerateSubKeys.c)
 *     BiGetObjectDescription @ 0x14082E2C8 (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiGetSavedBootEntry @ 0x14082F250 (BiGetSavedBootEntry.c)
 *     BiLookupObjectByBootEntry @ 0x14082F324 (BiLookupObjectByBootEntry.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14082F354 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiEnumerateBootEntries @ 0x140830608 (BiEnumerateBootEntries.c)
 *     BiLookupObjectByIdentifierAndBootEntry @ 0x140A5BEC8 (BiLookupObjectByIdentifierAndBootEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBuildIdentifierList(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  PCWSTR *v5; // rsi
  int v6; // ebx
  ULONG v7; // r12d
  ULONG v8; // r15d
  PCWSTR *v9; // r13
  __int64 v10; // r14
  int v11; // esi
  __int64 Pool2; // rax
  int v13; // r8d
  __int64 v14; // rbx
  int v15; // eax
  __int64 *v16; // rax
  PVOID v17; // rcx
  int v18; // eax
  _BYTE *v19; // r15
  unsigned __int64 v20; // r12
  unsigned int *v21; // rsi
  int v22; // r14d
  __int64 v23; // rax
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  _DWORD *v26; // rax
  _DWORD *v27; // r13
  __int64 v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rbx
  _OWORD *v31; // rcx
  _QWORD *v32; // rdx
  PVOID *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 *v37; // rax
  _QWORD *v38; // rcx
  __int64 *v39; // rax
  _QWORD *v40; // rcx
  __int64 *v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  __int64 v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  __int16 v48; // [rsp+30h] [rbp-89h] BYREF
  ULONG v49; // [rsp+34h] [rbp-85h] BYREF
  _QWORD *v50; // [rsp+38h] [rbp-81h] BYREF
  _QWORD *v51; // [rsp+40h] [rbp-79h] BYREF
  _QWORD ***v52; // [rsp+48h] [rbp-71h]
  PCWSTR *v53; // [rsp+50h] [rbp-69h] BYREF
  _QWORD *v54; // [rsp+58h] [rbp-61h] BYREF
  __int64 *v55; // [rsp+60h] [rbp-59h]
  _QWORD *v56; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v57; // [rsp+70h] [rbp-49h]
  unsigned int v58; // [rsp+78h] [rbp-41h] BYREF
  void *v59; // [rsp+80h] [rbp-39h] BYREF
  __int64 v60; // [rsp+88h] [rbp-31h] BYREF
  __int64 v61; // [rsp+90h] [rbp-29h] BYREF
  PVOID P; // [rsp+98h] [rbp-21h] BYREF
  PVOID v63; // [rsp+A0h] [rbp-19h] BYREF
  PVOID v64; // [rsp+A8h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-9h] BYREF
  GUID Guid; // [rsp+C0h] [rbp+7h] BYREF

  *(_QWORD *)(a3 + 8) = a3;
  *(_QWORD *)a3 = a3;
  v50 = a1;
  v57 = (__int64 *)&v56;
  P = 0LL;
  v56 = &v56;
  v58 = 0;
  v55 = (__int64 *)&v54;
  v61 = 0LL;
  v54 = &v54;
  v64 = 0LL;
  v52 = (_QWORD ***)&v51;
  v4 = a1;
  v60 = 0LL;
  v51 = &v51;
  v5 = 0LL;
  Guid = 0LL;
  v48 = 0;
  v49 = 0;
  DestinationString = 0LL;
  v63 = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  v6 = BiOpenKey(a1, L"Objects", 131097LL, &v59);
  if ( v6 >= 0 )
  {
    v6 = BiEnumerateSubKeys(v59, &v53, &v49);
    if ( v6 < 0 )
      goto LABEL_52;
    v7 = v49;
    v8 = 0;
    if ( v49 )
    {
      v9 = v53;
      do
      {
        RtlInitUnicodeString(&DestinationString, v9[v8]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && (int)BcdOpenObject(v4, &Guid, &v60) >= 0 )
        {
          v10 = v60;
          if ( (int)BiGetObjectDescription(v60, &v61) >= 0
            && (HIDWORD(v61) & 0xF0000000) == 0x10000000
            && (HIDWORD(v61) & 0xF00000) == 0x100000 )
          {
            v11 = HIDWORD(v61) & 0xFFFFF;
            if ( (HIDWORD(v61) & 0xFFFFF) != 1 )
            {
              Pool2 = ExAllocatePool2(258LL, 56LL, 1262764866LL);
              v14 = Pool2;
              if ( !Pool2 )
              {
                BcdCloseObject(v10);
                v6 = -1073741670;
                goto LABEL_52;
              }
              *(_OWORD *)Pool2 = 0LL;
              *(_OWORD *)(Pool2 + 16) = 0LL;
              *(_OWORD *)(Pool2 + 32) = 0LL;
              *(_QWORD *)(Pool2 + 48) = 0LL;
              *(GUID *)(Pool2 + 16) = Guid;
              v15 = *(_DWORD *)(Pool2 + 48) | 4;
              *(_DWORD *)(v14 + 48) = v15;
              if ( v11 == 0xFFFFF )
              {
                *(_DWORD *)(v14 + 48) = v15 | 8;
                v16 = v55;
                if ( (_QWORD **)*v55 != &v54 )
                  goto LABEL_68;
                *(_QWORD *)(v14 + 8) = v55;
                *(_QWORD *)v14 = &v54;
                *v16 = v14;
                v55 = (__int64 *)v14;
              }
              else
              {
                v37 = v57;
                if ( (_QWORD **)*v57 != &v56 )
LABEL_68:
                  __fastfail(3u);
                *(_QWORD *)(v14 + 8) = v57;
                *(_QWORD *)v14 = &v56;
                *v37 = v14;
                v57 = (__int64 *)v14;
              }
              v49 = 2;
              if ( (int)BcdGetElementDataWithFlags(v10, 369098882, v13, (unsigned int)&v48, (__int64)&v49) >= 0
                && (_BYTE)v48 )
              {
                *(_DWORD *)(v14 + 48) |= 0x10u;
              }
              if ( (int)BiGetSavedBootEntry(v10, &P) >= 0 )
              {
                v17 = P;
                *(_DWORD *)(v14 + 32) = *((_DWORD *)P + 2);
                *(_DWORD *)(v14 + 48) |= 2u;
                ExFreePoolWithTag(v17, 0x4B444342u);
              }
            }
          }
          BcdCloseObject(v10);
          v4 = v50;
        }
        ++v8;
      }
      while ( v8 < v7 );
    }
    v18 = BiEnumerateBootEntries(&v63, &v58);
    v19 = v63;
    v6 = v18;
    if ( v18 >= 0 )
    {
      v20 = v58;
      v21 = (unsigned int *)v63;
      v50 = 0LL;
      if ( v58 )
      {
        while ( 1 )
        {
          if ( (int)BiGetObjectReferenceFromEfiEntry(v21 + 1, &Guid) >= 0 )
          {
            v22 = 32;
            if ( (int)BiLookupObjectByIdentifierAndBootEntry(&v56, &Guid, v21[3], &v50) >= 0 )
            {
              v24 = v50;
              v45 = *v50;
              if ( *(_QWORD **)(*v50 + 8LL) != v50 )
                goto LABEL_68;
              v46 = (_QWORD *)v50[1];
              if ( (_QWORD *)*v46 != v50 )
                goto LABEL_68;
              *v46 = v45;
              *(_QWORD *)(v45 + 8) = v46;
              v47 = *(_QWORD **)(a3 + 8);
              if ( *v47 != a3 )
                goto LABEL_68;
              *v24 = a3;
              v24[1] = v47;
              *v47 = v24;
              *(_QWORD *)(a3 + 8) = v24;
              goto LABEL_27;
            }
          }
          else
          {
            v22 = 0;
          }
          v23 = ExAllocatePool2(258LL, 56LL, 1262764866LL);
          v50 = (_QWORD *)v23;
          v24 = (_QWORD *)v23;
          if ( !v23 )
            goto LABEL_67;
          *(_OWORD *)v23 = 0LL;
          *(_OWORD *)(v23 + 16) = 0LL;
          *(_OWORD *)(v23 + 32) = 0LL;
          *(_QWORD *)(v23 + 48) = 0LL;
          *(_DWORD *)(v23 + 48) |= 8u;
          v25 = v52;
          if ( *v52 != &v51 )
            goto LABEL_68;
          v24[1] = v52;
          *v24 = &v51;
          *v25 = v24;
          v52 = (_QWORD ***)v24;
LABEL_27:
          v26 = (_DWORD *)ExAllocatePool2(258LL, v21[2], 1262764866LL);
          v27 = v26;
          if ( !v26 )
          {
LABEL_67:
            v6 = -1073741670;
            goto LABEL_50;
          }
          memmove(v26, v21 + 1, v21[2]);
          v24[5] = v27;
          *((_DWORD *)v24 + 8) = v27[2];
          *((_DWORD *)v24 + 12) = v22 | v24[6] & 0xFFFFFFDE | 1;
          v28 = *v21;
          if ( (_DWORD)v28 )
          {
            v21 = (unsigned int *)((char *)v21 + v28);
            if ( (char *)v21 - v19 < v20 )
              continue;
          }
          break;
        }
      }
      v29 = v51;
      while ( v29 != &v51 )
      {
        v30 = v29;
        v29 = (_QWORD *)*v29;
        if ( (int)BiLookupObjectByBootEntry(&v54, *((unsigned int *)v30 + 8), &v64) >= 0 )
        {
          v31 = v64;
          v32 = *(_QWORD **)v64;
          if ( *(PVOID *)(*(_QWORD *)v64 + 8LL) != v64 )
            goto LABEL_68;
          v33 = (PVOID *)*((_QWORD *)v64 + 1);
          if ( *v33 != v64 )
            goto LABEL_68;
          *v33 = v32;
          v32[1] = v33;
          *((_OWORD *)v30 + 1) = v31[1];
          *((_DWORD *)v30 + 12) ^= (*((_DWORD *)v30 + 12) ^ *((_DWORD *)v31 + 12)) & 2;
          ExFreePoolWithTag(v31, 0x4B444342u);
          *((_DWORD *)v30 + 12) |= 4u;
          v34 = *v30;
          if ( *(_QWORD **)(*v30 + 8LL) != v30 )
            goto LABEL_68;
          v35 = (_QWORD *)v30[1];
          if ( (_QWORD *)*v35 != v30 )
            goto LABEL_68;
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
          v36 = *(_QWORD **)(a3 + 8);
          if ( *v36 != a3 )
            goto LABEL_68;
          *v30 = a3;
          v30[1] = v36;
          *v36 = v30;
          *(_QWORD *)(a3 + 8) = v30;
        }
      }
      if ( v56 != &v56 )
      {
        v38 = *(_QWORD **)(a3 + 8);
        *v38 = v56;
        v39 = v57;
        *(_QWORD *)(a3 + 8) = v57;
        *v39 = a3;
        v56[1] = v38;
      }
      if ( v54 != &v54 )
      {
        v40 = *(_QWORD **)(a3 + 8);
        *v40 = v54;
        v41 = v55;
        *(_QWORD *)(a3 + 8) = v55;
        *v41 = a3;
        v54[1] = v40;
      }
      if ( v51 != &v51 )
      {
        v42 = *(_QWORD **)(a3 + 8);
        *v42 = v51;
        v43 = v52;
        *(_QWORD *)(a3 + 8) = v52;
        *v43 = a3;
        v51[1] = v42;
      }
      v6 = 0;
    }
LABEL_50:
    if ( v19 )
      ExFreePoolWithTag(v19, 0x4B444342u);
LABEL_52:
    v5 = v53;
  }
  if ( v59 )
    BiCloseKey(v59);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 < 0 )
  {
    BiFreeIdentifierList(&v51);
    BiFreeIdentifierList(&v54);
    BiFreeIdentifierList(&v56);
    BiFreeIdentifierList((_QWORD **)a3);
    BiLogMessage(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v6);
  }
  return (unsigned int)v6;
}
