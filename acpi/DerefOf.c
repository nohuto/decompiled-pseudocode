/*
 * XREFs of DerefOf @ 0x1C0006500
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x1C00055CA (GetBaseData.c)
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     GetBaseObject @ 0x1C004B918 (GetBaseObject.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 BaseData; // rbx
  __int16 v6; // ax
  __int64 BaseObject; // rax
  __int64 v8; // rdx

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "R");
  if ( !(_DWORD)result )
  {
    BaseData = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(BaseData + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(BaseData + 16));
      BaseData = BaseObject + 64;
      DereferenceObjectEx(BaseObject, v8);
    }
    else if ( v6 == 129 )
    {
      BaseData = GetBaseData(*(_QWORD *)(BaseData + 16));
    }
    return ReadObject(a1, BaseData, *(_QWORD *)(a2 + 88));
  }
  return result;
}
