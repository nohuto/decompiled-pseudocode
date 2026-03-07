LONG_PTR __fastcall IoDeleteDriver(unsigned __int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
