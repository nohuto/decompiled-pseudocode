/*
 * XREFs of CMFReadCompressedSegment @ 0x1409FF980
 * Callers:
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140412810 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     XpressDecode @ 0x140677638 (XpressDecode.c)
 *     XpressDecodeClose @ 0x14067775C (XpressDecodeClose.c)
 *     XpressDecodeCreate @ 0x140677788 (XpressDecodeCreate.c)
 */

__int64 __fastcall CMFReadCompressedSegment(HANDLE FileHandle, char *a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v8; // r14
  NTSTATUS v9; // ebx
  int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // eax
  char *v13; // r10
  __int64 v14; // rbx
  char *v15; // rcx
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  unsigned int v18; // esi
  int v19; // esi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r12
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  char *v25; // [rsp+60h] [rbp-21h]
  HANDLE SectionHandle; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-11h] BYREF
  char *i; // [rsp+78h] [rbp-9h]
  LARGE_INTEGER SectionOffset; // [rsp+80h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+7h] BYREF
  unsigned int v31; // [rsp+E8h] [rbp+67h]

  SectionOffset.QuadPart = 0LL;
  SectionHandle = 0LL;
  ViewSize = 0LL;
  BaseAddress = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !FileHandle || !a4 || !a2 )
  {
    v9 = -1073741811;
    goto LABEL_30;
  }
  if ( a4[21] > 0x400u )
    return (unsigned int)-1073741811;
  v8 = (_DWORD *)XpressDecodeCreate();
  if ( !v8 )
  {
    v9 = -1073741801;
    goto LABEL_30;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v9 < 0 )
  {
LABEL_30:
    if ( BaseAddress )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    goto LABEL_32;
  }
  v9 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0x400000u,
         2u);
  if ( v9 >= 0 )
  {
    v10 = ViewSize;
    if ( ViewSize < 0x1060 || a3 < 0x1060 )
    {
LABEL_12:
      v9 = -1073741306;
      goto LABEL_30;
    }
    memmove(a2, a4, 0x1060uLL);
    v11 = v10 - 4192;
    v12 = a4[21];
    v13 = a2 + 4192;
    LODWORD(v14) = a4[20];
    v15 = (char *)BaseAddress + 4192;
    v16 = a3 - 4192;
    v31 = v11;
    v25 = (char *)BaseAddress + 4192;
    v17 = 0;
    for ( i = a2 + 4192; v17 < v12; i += v22 )
    {
      if ( v17 == v12 - 1 )
      {
        v18 = a4[22];
        ++v17;
      }
      else
      {
        v15 = v25;
        v19 = a4[v17 + 24];
        v20 = v17++;
        v18 = v19 - a4[v20 + 23];
      }
      if ( v18 > v11 || !v16 )
        goto LABEL_12;
      v21 = v16;
      if ( (unsigned int)v14 <= v16 )
        v21 = v14;
      v14 = v21;
      if ( v18 == v21 )
      {
        v22 = v21;
        memmove(v13, v15, v21);
      }
      else
      {
        if ( (unsigned int)XpressDecode((__int64)v8, (__int64)v13, v21, v21, (__int64)v15, v18) != v21 )
        {
          v9 = -1073741217;
          goto LABEL_30;
        }
        v22 = v14;
      }
      v16 -= v14;
      v11 = v31 - v18;
      v13 = &i[v22];
      v15 = &v25[v18];
      v31 -= v18;
      v12 = a4[21];
      v25 = v15;
    }
    v9 = 0;
    goto LABEL_30;
  }
  BaseAddress = 0LL;
LABEL_32:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v8 )
    XpressDecodeClose(v8);
  return (unsigned int)v9;
}
