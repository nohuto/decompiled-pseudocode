__int64 __fastcall EDIDV1_IsEDIDBaseBlock(unsigned __int8 *a1)
{
  _BYTE v2[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v3; // [rsp+70h] [rbp-18h]

  if ( !a1 )
    return 3221225485LL;
  v3 = 0LL;
  return MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v2, a1, 0x80u);
}
