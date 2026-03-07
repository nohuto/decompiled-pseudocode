__int64 __fastcall CVisualReferenceController::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8

  v4 = a1;
  if ( a3 )
    v4 = a3;
  return CResource::NotifyOnChanged(a1, a2, v4);
}
