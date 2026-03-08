/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C0049D38
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 *     InitializeNativeNamespace @ 0x1C0049FD4 (InitializeNativeNamespace.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     SetClearAssociatedNativeObject @ 0x1C004A22C (SetClearAssociatedNativeObject.c)
 *     GetNextNameSegment @ 0x1C004BA9C (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rdx
  int NameSpaceObject; // ebx
  _BYTE *ObjectPath; // r13
  bool v14; // zf
  void *v15; // rdi
  int NextNameSegment; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // rdi
  __int64 *v20; // rdx
  __int64 v21; // rdx
  __int64 *v23; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h]
  __int64 v25; // [rsp+40h] [rbp-49h]
  _BYTE *v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h]
  __int64 v28; // [rsp+58h] [rbp-31h]
  __int64 v29; // [rsp+60h] [rbp-29h]
  __int64 v30; // [rsp+68h] [rbp-21h]
  __int64 *v31; // [rsp+70h] [rbp-19h]
  _BYTE Src[8]; // [rsp+78h] [rbp-11h] BYREF

  v31 = a8;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v29 = gpNativeNameSpaceOwner;
  v10 = 0LL;
  v27 = gpnsNativeNameSpaceOverrideRoot;
  v30 = gpheapGlobal;
  v28 = gpnsNameSpaceRoot;
  v24 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v25);
    if ( !ObjectPath )
    {
      NameSpaceObject = -1073741670;
      goto LABEL_27;
    }
    DereferenceObjectEx(0LL, v11);
    v26 = ObjectPath;
    v14 = *ObjectPath == 92;
    v15 = ObjectPath;
    v25 = 0LL;
    if ( v14 )
    {
      v15 = ObjectPath + 1;
      v26 = ObjectPath + 1;
    }
    NameSpaceObject = GetNameSpaceObject(v15);
    if ( NameSpaceObject >= 0 )
    {
      FreeNameSpaceObjects(v23);
      v23 = 0LL;
    }
    v9 = v28;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 112));
      v8 = v24;
      v15 = v26;
    }
    Src[4] = 0;
    v10 = v27;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 112));
      v8 = v24;
      v15 = v26;
    }
    if ( v15 )
    {
      while ( 1 )
      {
        NextNameSegment = GetNextNameSegment(v15, Src, &v26);
        NameSpaceObject = NextNameSegment;
        if ( NextNameSegment < 0 )
          break;
        NameSpaceObject = GetNameSpaceObject(Src);
        if ( NameSpaceObject < 0 )
        {
          v8 = v24;
          goto LABEL_26;
        }
        v17 = CreateNameSpaceObject(v30, Src, v10, v29, &v23, 0x20000);
        v8 = v24;
        NameSpaceObject = v17;
        v19 = v23;
        if ( v17 < 0 )
        {
          if ( v17 != -1073741771 )
            goto LABEL_26;
          NameSpaceObject = 0;
        }
        else
        {
          v20 = v23;
          *((_WORD *)v23 + 32) |= 0xA00u;
          SetClearAssociatedNativeObject(v8, v20);
        }
        DereferenceObjectEx(v10, v18);
        v23 = 0LL;
        v10 = (__int64)v19;
        DereferenceObjectEx(v9, v21);
        v15 = v26;
        v9 = v8;
        v8 = 0LL;
        v24 = 0LL;
        if ( !v26 )
          goto LABEL_25;
      }
      if ( NextNameSegment != -1073741197 )
        goto LABEL_26;
      NameSpaceObject = 0;
    }
    else if ( NameSpaceObject < 0 )
    {
LABEL_26:
      ExFreePoolWithTag(ObjectPath, 0);
      goto LABEL_27;
    }
LABEL_25:
    *v31 = v10;
    v10 = 0LL;
    goto LABEL_26;
  }
LABEL_27:
  if ( v9 )
    DereferenceObjectEx(v9, v11);
  if ( v10 )
    DereferenceObjectEx(v10, v11);
  if ( v8 )
    DereferenceObjectEx(v8, v11);
  return (unsigned int)NameSpaceObject;
}
