__int64 __fastcall CmFcpManagerCreateSectionFromBuffer(void *Src, size_t Size, __int64 a3, __int64 a4, __int64 a5)
{
  int Section; // edi
  size_t v8; // r8
  ULONG_PTR v9; // rbx
  __int64 v10; // xmm1_8
  PVOID Object[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  ULONG_PTR BugCheckParameter1[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h]

  v13 = 0LL;
  v15 = 0LL;
  *(_OWORD *)Object = 0LL;
  *(_OWORD *)BugCheckParameter1 = 0LL;
  Section = CmFcpManagerCreateSection(Size, a3, a4, Object);
  if ( Section < 0 || (Section = CmFcpMapSection(Object, BugCheckParameter1), Section < 0) )
  {
    v9 = BugCheckParameter1[1];
  }
  else
  {
    v8 = Size;
    v9 = BugCheckParameter1[1];
    memmove((void *)BugCheckParameter1[1], Src, v8);
    Section = 0;
    v10 = v13;
    *(_OWORD *)a5 = *(_OWORD *)Object;
    *(_QWORD *)(a5 + 16) = v10;
    *(_OWORD *)Object = 0LL;
  }
  if ( v9 )
    MiRemoveFromSystemSpace(v9, 1);
  if ( Object[1] )
    ObfDereferenceObject(Object[1]);
  return (unsigned int)Section;
}
