/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C004A534
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3CC (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     AMLICreateOverrideObjectDefault @ 0x1C004A82C (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C004A920 (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C004ABA8 (AMLIGetValidNamespaceName.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, const char *a3)
{
  int valid; // ebx
  int v6; // eax
  void *Pool2; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v14 = 0;
  v15 = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v14);
  if ( valid >= 0 )
  {
    v6 = OSReadRegValue(a3);
    valid = v6;
    if ( v6 == -2147483643 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 0LL, 1231842625LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = 0LL;
      if ( v6 < 0 )
        return (unsigned int)valid;
    }
    valid = OSReadRegValue(a3);
    if ( valid >= 0 )
    {
      v16 = 0LL;
      v18 = 0LL;
      v17 = 0LL;
      v8 = v14 == 1346716767 ? AMLICreateOverrideObjectDep(Pool2) : AMLICreateOverrideObjectDefault(Pool2, 0LL);
      valid = v8;
      if ( v8 >= 0 )
      {
        valid = CreateNameSpaceObject(gpheapGlobal, a3, a2, *(_QWORD *)(a2 + 48), &v15, 0);
        if ( valid < 0 )
        {
          FreeObjData(&v16);
        }
        else
        {
          v10 = v15;
          v11 = v17;
          *(_OWORD *)(v15 + 64) = v16;
          v12 = v18;
          *(_OWORD *)(v10 + 80) = v11;
          *(_QWORD *)(v10 + 96) = v12;
          DereferenceObjectEx(v10, v9);
        }
      }
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)valid;
}
