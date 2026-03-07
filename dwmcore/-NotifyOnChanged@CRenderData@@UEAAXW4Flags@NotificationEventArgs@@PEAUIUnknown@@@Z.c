__int64 __fastcall CRenderData::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (((_DWORD)a2 - 2) & 0xFFFFFFFD) == 0 )
  {
    a2 = 0LL;
LABEL_4:
    *(_BYTE *)(a1 + 296) = 1;
    return CResource::NotifyOnChanged(a1, a2, a3);
  }
  if ( (_DWORD)a2 == 1 )
  {
    a2 = 6LL;
    return CResource::NotifyOnChanged(a1, a2, a3);
  }
  if ( (unsigned int)(a2 - 5) > 1 )
    goto LABEL_4;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
