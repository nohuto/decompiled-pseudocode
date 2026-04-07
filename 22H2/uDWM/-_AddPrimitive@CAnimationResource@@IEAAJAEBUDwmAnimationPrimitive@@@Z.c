/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180006008
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180005EC0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180005F50 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800B9B60 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800B9C20 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  char v6; // r14
  char *v7; // r10
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx

  v2 = *((_DWORD *)this + 14);
  v3 = 0;
  v6 = 0;
  if ( *((_BYTE *)this + 72)
    || v2 && *((_QWORD *)a2 + 1) < *(_QWORD *)(32LL * (unsigned int)(v2 - 1) + *((_QWORD *)this + 4) + 8)
    || *(_DWORD *)a2 == 3 && (!v2 || *((_QWORD *)a2 + 1) == *(_QWORD *)(*((_QWORD *)this + 4) + 8LL)) )
  {
    return (unsigned int)-2147024809;
  }
  if ( v2 && *(_QWORD *)(32LL * (unsigned int)(v2 - 1) + *((_QWORD *)this + 4) + 8) == *((_QWORD *)a2 + 1) )
    v6 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      if ( !_finite(*((float *)a2 + 4))
        || !_finite(*((float *)a2 + 5))
        || !_finite(*((float *)a2 + 6))
        || !_finite(*((float *)a2 + 7)) )
      {
        return (unsigned int)-2147024809;
      }
      break;
    case 3:
      if ( *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1) - *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) )
        return (unsigned int)-2147024809;
      break;
    case 4:
      if ( _finite(*((float *)a2 + 4)) )
      {
        *((_BYTE *)this + 72) = 1;
        break;
      }
      return (unsigned int)-2147024809;
    default:
      return (unsigned int)-2147467259;
  }
  v7 = (char *)this + 32;
  if ( v6 )
  {
    v15 = *(_QWORD *)v7;
    v16 = 32LL * (unsigned int)(v2 - 1);
    *(_OWORD *)(v16 + v15) = *(_OWORD *)a2;
    *(_OWORD *)(v16 + v15 + 16) = *((_OWORD *)a2 + 1);
  }
  else
  {
    v8 = *((_DWORD *)this + 14);
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      v10 = 0;
      if ( v9 > *((_DWORD *)v7 + 5) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(v7, 32LL, 1LL, a2);
        v10 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xC0u);
      }
      else
      {
        v11 = v8;
        v12 = *(_QWORD *)v7;
        v11 *= 32LL;
        *(_OWORD *)(v11 + v12) = *(_OWORD *)a2;
        *(_OWORD *)(v11 + v12 + 16) = *((_OWORD *)a2 + 1);
        *((_DWORD *)v7 + 6) = v9;
      }
    }
    return v10;
  }
  return v3;
}
