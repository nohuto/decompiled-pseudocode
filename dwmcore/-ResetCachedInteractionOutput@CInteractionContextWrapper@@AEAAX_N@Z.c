void __fastcall CInteractionContextWrapper::ResetCachedInteractionOutput(CInteractionContextWrapper *this, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx

  anonymous_namespace_::ResetInteractionOutput((char *)this + 24, a2, this);
  anonymous_namespace_::ResetInteractionOutput(v2 + 88, v3, v2);
  anonymous_namespace_::ResetInteractionOutput(v4 + 152, v5, v4);
}
