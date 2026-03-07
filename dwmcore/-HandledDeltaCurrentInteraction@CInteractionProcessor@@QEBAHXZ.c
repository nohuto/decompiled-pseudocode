__int64 __fastcall CInteractionProcessor::HandledDeltaCurrentInteraction(CInteractionProcessor *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  bool v8; // zf

  v2 = *((_DWORD *)this + 197) - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            return 0LL;
          v6 = *((_DWORD *)this + 124);
          goto LABEL_7;
        }
        return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 1u);
      }
      if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 1u);
      v6 = *((_DWORD *)this + 84);
    }
    else
    {
      v6 = *((_DWORD *)this + 44);
    }
LABEL_7:
    result = 1LL;
    if ( (v6 & 3) != 0 && (*((_BYTE *)this + 808) & 1) != 0 || (v6 & 0xC) != 0 && (*((_BYTE *)this + 808) & 2) != 0 )
      return result;
    v8 = (v6 & 0x30) == 0;
    goto LABEL_21;
  }
  result = 1LL;
  if ( (*((_BYTE *)this + 16) & 3) != 0 && (*((_BYTE *)this + 808) & 1) != 0
    || (*((_BYTE *)this + 16) & 0xC) != 0 && (*((_BYTE *)this + 808) & 2) != 0 )
  {
    return result;
  }
  v8 = (*((_BYTE *)this + 16) & 0x30) == 0;
LABEL_21:
  if ( v8 || (*((_BYTE *)this + 808) & 4) == 0 )
    return 0LL;
  return result;
}
