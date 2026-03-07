char __fastcall DoesSamplerRequireConstantBufferData(const struct ShaderLinkingSamplerDesc *a1)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)a1 + 23) || *((_BYTE *)a1 + 18) || *((_BYTE *)a1 + 19) )
    return 1;
  return result;
}
