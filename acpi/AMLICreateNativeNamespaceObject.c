/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C00499F8
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C0037D80 (AcpiReflectNativeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     CreateNativeNameSpaceObject @ 0x1C0049D38 (CreateNativeNameSpaceObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C004ABA8 (AMLIGetValidNamespaceName.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     NewObjData @ 0x1C004C19C (NewObjData.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall AMLICreateNativeNamespaceObject(
        int a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  _BYTE *v9; // rdi
  int valid; // ebx
  __int64 v11; // r14
  _BYTE *v12; // rax
  int NameSpaceObject; // eax
  __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int64 v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-21h]
  __int128 v22; // [rsp+58h] [rbp-19h] BYREF
  __int128 v23; // [rsp+68h] [rbp-9h]
  _BYTE *v24; // [rsp+78h] [rbp+7h]
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v26; // [rsp+84h] [rbp+13h]

  v21 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v26 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v11 = *a3;
  if ( !v11 )
    return (unsigned int)-1073741823;
  v24 = 0LL;
  v22 = 0LL;
  WORD1(v22) = 8;
  v23 = 0LL;
  DWORD2(v23) = 200;
  if ( a1 == 8 )
  {
    if ( a4 > 7 || a5 > 1 )
      return (unsigned int)-1073741637;
    v12 = (_BYTE *)NewObjData(gpheapGlobal, &v22);
    v9 = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    memset(v12, 0, 0xC8uLL);
  }
  *a6 = 0;
  NameSpaceObject = GetNameSpaceObject(&Src);
  valid = NameSpaceObject;
  if ( NameSpaceObject < 0 )
  {
    if ( NameSpaceObject != -1073741772 )
      goto LABEL_19;
    valid = CreateNameSpaceObject(gpheapGlobal, &Src, v11, gpNativeNameSpaceOwner, &v20, 0x20000);
  }
  else
  {
    if ( a1 != 8 || (v14 = *(_WORD *)(v21 + 66), (unsigned __int16)(v14 - 1) > 3u) && v14 != 8 )
    {
      valid = -1073741823;
      goto LABEL_19;
    }
    if ( (*(_WORD *)(v21 + 64) & 0x180) != 0 )
    {
      valid = -1073741823;
      *a6 = 1;
      goto LABEL_19;
    }
    valid = CreateNativeNameSpaceObject(384LL, &Src, v11);
    DereferenceObjectEx(v21, v15);
  }
  if ( valid >= 0 )
  {
    v18 = v20;
    if ( a1 == 8 )
    {
      v19 = v23;
      *(_OWORD *)(v20 + 64) = v22;
      *(_OWORD *)(v18 + 80) = v19;
      *(_QWORD *)(v18 + 96) = v9;
      v9[193] = a4 & 7;
      if ( a5 )
        v9[192] = 1;
    }
    else
    {
      *(_WORD *)(v20 + 66) = 6;
    }
    *(_WORD *)(v18 + 64) |= 0x200u;
    DereferenceObjectEx(v18, v16);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v9 )
  {
    v24 = v9;
    FreeObjData(&v22);
  }
  return (unsigned int)valid;
}
