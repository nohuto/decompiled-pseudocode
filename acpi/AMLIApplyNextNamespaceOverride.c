/*
 * XREFs of AMLIApplyNextNamespaceOverride @ 0x1C004A71C
 * Callers:
 *     AMLIApplyNamespaceOverride @ 0x1C004A6B0 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004A71C (AMLIApplyNextNamespaceOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004A71C (AMLIApplyNextNamespaceOverride.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall AMLIApplyNextNamespaceOverride(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  int v4; // ebx
  int NameSpaceObject; // eax
  __int64 v7; // rdx
  __int16 v8; // ax
  __int64 v9; // rcx
  int NamespaceOverride; // eax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  int Src; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+3Ch] [rbp-14h]

  v2 = (__int64 *)(a1 + 24);
  v3 = *(__int64 **)(a1 + 24);
  v4 = 0;
  v12 = 0LL;
  v14 = 0;
  while ( v2 != v3 )
  {
    Src = *((_DWORD *)v3 + 10);
    NameSpaceObject = GetNameSpaceObject(&Src);
    v4 = NameSpaceObject;
    if ( *((_WORD *)v3 + 33) )
    {
      if ( NameSpaceObject >= 0 )
      {
        v8 = 128;
        goto LABEL_8;
      }
      if ( NameSpaceObject == -1073741772 )
      {
        v4 = CreateNameSpaceObject(gpheapGlobal, &Src, a2, *(_QWORD *)(a2 + 48), &v12, 0);
        if ( v4 >= 0 )
        {
          v8 = 256;
LABEL_8:
          v9 = v12;
          *(_WORD *)(v12 + 64) |= v8;
LABEL_11:
          DereferenceObjectEx(v9, v7);
          v12 = 0LL;
        }
      }
    }
    else
    {
      if ( NameSpaceObject >= 0 )
      {
        NamespaceOverride = AMLIApplyNextNamespaceOverride(v3, v12);
        v9 = v12;
        v4 = NamespaceOverride;
        goto LABEL_11;
      }
      if ( NameSpaceObject == -1073741772 )
        v4 = 0;
    }
    v3 = (__int64 *)*v3;
  }
  return (unsigned int)v4;
}
