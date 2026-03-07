__int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned int)MiFlags >> 15) & 1;
}
