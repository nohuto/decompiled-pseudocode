__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 appended; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r11
  int v16; // eax
  int v18; // r9d
  unsigned int v19[2]; // [rsp+20h] [rbp-28h]
  unsigned int v20; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v4 = 0LL;
  if ( *a3 )
  {
    while ( 1 )
    {
      appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)(a3[1] + 2 * v4), 2uLL);
      v10 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
              a1 + 16,
              v9,
              appended);
      if ( v10 == *(_QWORD *)(a1 + 24) )
        break;
      v11 = *(_BYTE *)(v10 + 33) == 0;
      v12 = (unsigned int)*(char *)(v10 + 32);
      v13 = *(__int64 **)(a1 + 8);
      v14 = *(_QWORD *)(v10 + 24);
      v15 = *v13;
      if ( v11 )
      {
        v19[0] = v4;
        v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, unsigned int *))(v15 + 56))(
                v13,
                v14,
                v12,
                a2,
                *(unsigned int **)v19);
        v3 = v16;
        if ( v16 < 0 )
        {
          v20 = 354;
          goto LABEL_10;
        }
      }
      else
      {
        v19[1] = HIDWORD(a2);
        v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v15 + 64))(v13, v14, v12);
        v3 = v16;
        if ( v16 < 0 )
        {
          v20 = 361;
LABEL_10:
          v18 = v16;
          goto LABEL_12;
        }
      }
      if ( (unsigned __int64)++v4 >= *a3 )
        return v3;
    }
    v3 = -2147024809;
    v18 = -2147024809;
    v20 = 346;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v18, v20, 0LL);
  }
  return v3;
}
