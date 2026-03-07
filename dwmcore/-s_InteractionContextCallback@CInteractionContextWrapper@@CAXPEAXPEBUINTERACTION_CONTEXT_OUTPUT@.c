// attributes: thunk
void __fastcall CInteractionContextWrapper::s_InteractionContextCallback(
        CInteractionContextWrapper *a1,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  CInteractionContextWrapper::InteractionContextCallback(a1, a2);
}
